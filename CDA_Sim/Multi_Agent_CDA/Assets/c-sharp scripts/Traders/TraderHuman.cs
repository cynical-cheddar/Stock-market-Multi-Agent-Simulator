using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class TraderHuman : Trader, IPunObservable
{

    public int photon_user_id = 0;


    HumanTraderInterface myTraderInterface;

    TraderDetails lastTraderDetails;

    




    protected override void Awake()
    {
        base.Awake();
        lastTraderDetails = traderDetails;
        
    }

    public override void Order_Add_Success()
    {
        base.Order_Add_Success();
        // call RPC on human trader interface to play add success noise

        myTraderInterface.GetComponent<PhotonView>().RPC(nameof(myTraderInterface.AddOrderRequestSuccessCallback), RpcTarget.All);
    }

    public override void Order_Remove_Success()
    {
        base.Order_Remove_Success();

        // call RPC on human trader interface to play add success noise
        myTraderInterface.GetComponent<PhotonView>().RPC(nameof(myTraderInterface.AddOrderRequestSuccessCallback), RpcTarget.All);
    }




    [PunRPC]
    public void SetTid_RPC(string tid_local, int user_id)
    {
        SetTraderTid(tid_local);
        photon_user_id = user_id;

        // inform player user_id of their trader's tid
        Photon.Realtime.Player targetPlayer = PhotonNetwork.CurrentRoom.GetPlayer(user_id);

        // bounce back to the player who just jopined and tell them that their trader had been created
        GetComponent<PhotonView>().RPC(nameof(SetTargetsTraderInterfaceTid), RpcTarget.All, traderDetails.tid, user_id);
    }



    // even though this rpc should only be sent to the intended target, check anyway for photonview
    [PunRPC]
    public void SetTargetsTraderInterfaceTid(string tid, int user_id)
    {
        List<HumanTraderInterface> humanTraderInterfaces = new List<HumanTraderInterface>();
        humanTraderInterfaces.AddRange(FindObjectsOfType<HumanTraderInterface>());
        foreach(HumanTraderInterface humanTraderInterface in humanTraderInterfaces)
        {
            if (humanTraderInterface.GetComponent<PhotonView>().OwnerActorNr == user_id)
            {
                humanTraderInterface.SetMyTrader(tid);
                myTraderInterface = humanTraderInterface;
            }
        }
    }

    [PunRPC]
    public void ParentOrphanedTrader_RPC()
    {
        GameObject traderHumansParent = FindObjectOfType<TraderHumansGoIdentifier>().gameObject;
        transform.SetParent(traderHumansParent.transform);
    }

    // ask BSE to cancel order if we are the master client
    [PunRPC]
    public void CancelOrderRequest(string LOB_Order_JSON)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            LOB_Order cancelOrder = JsonUtility.FromJson<LOB_Order>(LOB_Order_JSON);
            bse.RemoveOrder(cancelOrder);

        }
        else
        {
            Debug.LogError("This RPC (CancelOrderRequest) should not have ben called on a client other than the master client");
        }
    }

    // ask BSE to add order if we are the master client
    [PunRPC]
    public void AddOrderRequest(string LOB_Order_JSON)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            LOB_Order addOrder = JsonUtility.FromJson<LOB_Order>(LOB_Order_JSON);
            bse.AddOrder(addOrder);

        }
        else
        {
            Debug.LogError("This RPC (AddOrderRequest) should not have ben called on a client other than the master client");
        }
    }


    // Bookeep override. Send an




    // check for details so that we may send back details to clients
    // this is horribly janky
    bool CheckForTraderDetailsChange(TraderDetails last, TraderDetails current)
    {
        if (current.ttype != last.ttype) return true;
        if (current.traderRole != last.traderRole) return true;
        if(current.tid != last.tid) return true;
        if(current.profit != last.profit) return true;
        if(current.orders != last.orders) return true;
        if(current.n_quotes != last.n_quotes) return true;
        if(current.blotter_length != last.blotter_length) return true;
        if(current.blotter != last.blotter) return true;
        if(current.balance != last.balance) return true;
        

        return false;
    }


    // synchronise trader human traderdetails:
    // send notification to ui manager to populate UI

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        // TODO: Change to false
        bool send = true;
        if (PhotonNetwork.IsMasterClient)
        {
            if (CheckForTraderDetailsChange(lastTraderDetails, traderDetails))
            {
                send = true;
            }

            if (send)
            {
                if (stream.IsWriting && PhotonNetwork.IsMasterClient)
                {
                    stream.SendNext(JsonUtility.ToJson(traderDetails));
                }
            }
            lastTraderDetails = traderDetails;
        }


        else if (stream.IsReading && !PhotonNetwork.IsMasterClient)
        {
            string traderDetails_JSON = (string)stream.ReceiveNext();
            traderDetails = JsonUtility.FromJson<TraderDetails>(traderDetails_JSON);
            Debug.Log(traderDetails_JSON);

            // alert the trader interfaces
            if (myTraderInterface != null) myTraderInterface.SetMyTraderDetails(traderDetails);
        }

    }
}

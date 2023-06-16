using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class TraderHuman : Trader
{

    public int photon_user_id = 0;


    HumanTraderInterface myTraderInterface;

    TraderDetails lastTraderDetails;




    protected override void Awake()
    {
        base.Awake();
        lastTraderDetails = traderDetails;
    }


    [PunRPC]
    public void SetTid_RPC(string tid_local, int user_id)
    {
        SetTraderTid(tid_local);
        photon_user_id = user_id;

        // inform player user_id of their trader's tid
        Photon.Realtime.Player targetPlayer = PhotonNetwork.CurrentRoom.GetPlayer(user_id);

        // bounce back to the player who just jopined and tell them that their trader had been created
        GetComponent<PhotonView>().RPC(nameof(SetTargetsTraderInterfaceTid), targetPlayer, traderDetails.tid, user_id);
    }



    // even though this rpc should only be sent to the intended target, check anyway for photonview
    [PunRPC]
    public void SetTargetsTraderInterfaceTid(string tid, int user_id)
    {
        List<HumanTraderInterface> humanTraderInterfaces = new List<HumanTraderInterface>();
        humanTraderInterfaces.AddRange(FindObjectsOfType<HumanTraderInterface>());
        foreach(HumanTraderInterface humanTraderInterface in humanTraderInterfaces)
        {
            if (humanTraderInterface.GetComponent<PhotonView>().IsMine)
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




    // check for details so that we may send back details to clients
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
        bool send = false;
        if (PhotonNetwork.IsMasterClient)
        {
            if (CheckForTraderDetailsChange(lastTraderDetails, traderDetails))
            {
                send = true;
            }
            lastTraderDetails = traderDetails;
        }

        if (send)
        {
            if (stream.IsWriting && PhotonNetwork.IsMasterClient)
            {
                stream.SendNext(JsonUtility.ToJson(traderDetails));
            }
        }

        else if (stream.IsReading && !PhotonNetwork.IsMasterClient)
        {
            string traderDetails_JSON = (string)stream.ReceiveNext();
            traderDetails = JsonUtility.FromJson<TraderDetails>(traderDetails_JSON);

            // alert the trader interfaces
            if (myTraderInterface != null) myTraderInterface.SetMyTraderDetails(traderDetails);
        }

    }
}

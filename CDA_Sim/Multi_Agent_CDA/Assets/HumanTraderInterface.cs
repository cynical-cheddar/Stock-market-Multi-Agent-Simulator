using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;


public enum RequestResponse
{
    allow,
    overQuantity,
    negativePrice,
    negativeQuantity

}

public class HumanTraderInterface : MonoBehaviour
{
    // Start is called before the first frame update
    TraderHumanManager traderHumanManager;

    public TraderHuman my_traderHuman;

    ClientUIManager clientUIManager;



    TraderDetails myTraderDetails;

    bool setup = false;



    


    // human trader interface provides the link between the humanTrader and the ClientUIManager
    // it is responsible for sending RPCs to the trader, which subsequently sends back a stream of the LOB and RPC acknowledgements


    // called from the trader running on the master client instance. Update profit on UI if the photonview is ours
    PhotonView photonView;


    public void Set_LOB_Json(string lob_json)
    {
        Debug.Log("Set_LOB_Json" + lob_json);
        clientUIManager.BuildLobFronJson(lob_json);
    }
    bool registered = false;
    void Start()
    {
        photonView = GetComponent<PhotonView>();
        traderHumanManager = FindObjectOfType<TraderHumanManager>();
        clientUIManager = FindObjectOfType<ClientUIManager>();

        // request human trader instantiation through the TraderHumanManager
        if (photonView.IsMine)
        {
            if (!registered)
            {
                traderHumanManager.GetComponent<PhotonView>().RPC(nameof(traderHumanManager.AddHumanTrader), RpcTarget.All, PhotonNetwork.LocalPlayer.ActorNumber);
                registered = true;
            }
        }
    }

    [PunRPC]
    void SetMyTrader_RPC(string tid)
    {
        List<TraderHuman> humanTraders = new List<TraderHuman>();
        humanTraders.AddRange(FindObjectsOfType<TraderHuman>());
        foreach (TraderHuman traderHuman in humanTraders)
        {
            if (traderHuman.traderDetails.tid == tid)
            {
                my_traderHuman = traderHuman;
                Debug.Log("successfully set my trader to tid: " + tid);
            }
        }

        // also set up UI
        if (GetComponent<PhotonView>().IsMine)
        {
            clientUIManager = FindObjectOfType<ClientUIManager>();
            setup = true;
        }
    }

    // Request to add an order to BSE that is located on the master client instance
    public void AddOrderRequest(LOB_Order add_order)
    {
        my_traderHuman.GetComponent<PhotonView>().RPC(nameof(my_traderHuman.AddOrderRequest), RpcTarget.MasterClient, JsonUtility.ToJson(add_order));
    }

    [PunRPC]
    public void AddOrderRequestFailure(int resposne_int)
    {
        if (photonView.IsMine)
        {
            RequestResponse response = (RequestResponse)resposne_int;

            
            clientUIManager.DealWithRejection(response);
        }
    }

    // Request to cancel an order in BSE that's lcoated on the master client instance
    public void CancelOrderRequest(LOB_Order cancel_order)
    {
        my_traderHuman.GetComponent<PhotonView>().RPC(nameof(my_traderHuman.CancelOrderRequest), RpcTarget.MasterClient, JsonUtility.ToJson(cancel_order));
    }

    [PunRPC]
    public void AddOrderRequestSuccessCallback()
    {
        if (photonView.IsMine)
        {
            clientUIManager.AddOrderRequest_Success();
        }
    }

    [PunRPC]
    public void RemoveOrderRequestSuccessCallback()
    {
        if (photonView.IsMine)
        {
            clientUIManager.CancelOrderRequest_Success();
        }
    }

    public void SetMyTrader(string tid)
    {
        photonView.RPC(nameof(SetMyTrader_RPC), RpcTarget.All, tid);
    }

    public void SetMyTraderDetails(TraderDetails trader_Details)
    {
        myTraderDetails = trader_Details;
        // tell the UI to update with the new set of details
        if (photonView.IsMine) clientUIManager.UpdateTraderUI(trader_Details);
        

    }



    // Update is called once per frame
    void Update()
    {
        if(clientUIManager == null)
        {
            clientUIManager = FindObjectOfType<ClientUIManager>();
        }
    }
}

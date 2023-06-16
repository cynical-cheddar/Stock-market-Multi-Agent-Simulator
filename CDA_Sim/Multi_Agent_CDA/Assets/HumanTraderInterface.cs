using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class HumanTraderInterface : MonoBehaviour
{
    // Start is called before the first frame update
    TraderHumanManager traderHumanManager;

    TraderHuman my_traderHuman;

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

    void Start()
    {
        photonView = GetComponent<PhotonView>();
        traderHumanManager = FindObjectOfType<TraderHumanManager>();

        // request human trader instantiation through the TraderHumanManager
        if (photonView.IsMine)
        {
            traderHumanManager.GetComponent<PhotonView>().RPC(nameof(traderHumanManager.AddHumanTrader), RpcTarget.All, PhotonNetwork.LocalPlayer.ActorNumber);
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
        
    }
}

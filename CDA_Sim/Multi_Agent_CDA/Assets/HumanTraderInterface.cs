using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class HumanTraderInterface : MonoBehaviour
{
    // Start is called before the first frame update
    TraderHumanManager traderHumanManager;

    TraderHuman my_traderHuman;

    void Start()
    {
        PhotonView photonView = GetComponent<PhotonView>();
        traderHumanManager = FindObjectOfType<TraderHumanManager>();

        // request human trader instantiation through the TraderHumanManager
        if (photonView.IsMine)
        {
            traderHumanManager.GetComponent<PhotonView>().RPC(nameof(traderHumanManager.AddHumanTrader), RpcTarget.All, PhotonNetwork.LocalPlayer.ActorNumber);
        }
    }

    public void SetMyTrader(string tid)
    {
        List<TraderHuman> humanTraders = new List<TraderHuman>();
        humanTraders.AddRange(FindObjectsOfType<TraderHuman>());
        foreach(TraderHuman traderHuman in humanTraders)
        {
            if(traderHuman.tid == tid)
            {
                my_traderHuman = traderHuman;
                Debug.Log("successfully set my trader to tid: " + tid);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

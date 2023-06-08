using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class TraderHumanManager : MonoBehaviour
{

    public List<TraderHuman> humanTraders = new List<TraderHuman>();

    [Header("Put in resources")]
    public GameObject humanTraderPrefab;

    int tid_suffix = 1;

    [PunRPC]
    public void AddHumanTrader(int userID)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            


            // instantiate a human trader
            

            GameObject humanTraderInstanceGO = PhotonNetwork.Instantiate(humanTraderPrefab.name, Vector3.zero, Quaternion.identity);

            TraderHuman newTraderHuman = humanTraderInstanceGO.GetComponent<TraderHuman>();
            humanTraders.Add(newTraderHuman);
            // call RPC on newTraderHuman to set tid for all people


            string tid = "H" + tid_suffix.ToString();
            newTraderHuman.SetTraderTid(tid);
            tid_suffix++;

            humanTraderInstanceGO.GetComponent<PhotonView>().RPC(nameof(newTraderHuman.SetTid_RPC), RpcTarget.AllBufferedViaServer, tid, userID);
            humanTraderInstanceGO.GetComponent<PhotonView>().RPC(nameof(newTraderHuman.ParentOrphanedTrader_RPC), RpcTarget.AllBufferedViaServer);

            


            
        }

    }


}

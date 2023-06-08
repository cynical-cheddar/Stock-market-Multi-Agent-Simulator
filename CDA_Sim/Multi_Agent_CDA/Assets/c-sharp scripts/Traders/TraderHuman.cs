using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class TraderHuman : Trader
{

    public int photon_user_id = 0;
    



    [PunRPC]
    public void SetTid_RPC(string tid_local, int user_id)
    {
        SetTraderTid(tid_local);
        photon_user_id = user_id;

        // inform player user_id of their trader's tid
        Photon.Realtime.Player targetPlayer = PhotonNetwork.CurrentRoom.GetPlayer(user_id);

        // bounce back to the player who just jopined and tell them that their trader had been created
        GetComponent<PhotonView>().RPC(nameof(SetTargetsTraderInterfaceTid), targetPlayer, tid);
    }



    // even though this rpc should only be sent to the intended target, check anyway for photonview
    [PunRPC]
    public void SetTargetsTraderInterfaceTid(string tid)
    {
        List<HumanTraderInterface> humanTraderInterfaces = new List<HumanTraderInterface>();
        humanTraderInterfaces.AddRange(FindObjectsOfType<HumanTraderInterface>());
        foreach(HumanTraderInterface humanTraderInterface in humanTraderInterfaces)
        {
            if (humanTraderInterface.GetComponent<PhotonView>().IsMine)
            {
                humanTraderInterface.SetMyTrader(tid);
            }
        }
    }

    [PunRPC]
    public void ParentOrphanedTrader_RPC()
    {
        GameObject traderHumansParent = FindObjectOfType<TraderHumansGoIdentifier>().gameObject;
        transform.SetParent(traderHumansParent.transform);
    }


}

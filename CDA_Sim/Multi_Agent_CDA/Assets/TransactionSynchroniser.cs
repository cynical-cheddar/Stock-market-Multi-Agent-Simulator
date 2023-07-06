using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class TransactionSynchroniser : MonoBehaviour, IPunObservable
{
    public TranactionRecordContainer tranactionRecordContainer = new TranactionRecordContainer();

    public ClientUIManager clientUIManager;

    string last_tranactionRecordContainer_json = "";
    string tranactionRecordContainer_json = "";

    public void SetTranactionRecordContainer(TranactionRecordContainer container)
    {
        tranactionRecordContainer = container;

        tranactionRecordContainer_json = JsonUtility.ToJson(tranactionRecordContainer);
    }


    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting && PhotonNetwork.IsMasterClient)
        {
            if (tranactionRecordContainer_json != last_tranactionRecordContainer_json)
            {
                stream.SendNext(tranactionRecordContainer_json);
                last_tranactionRecordContainer_json = tranactionRecordContainer_json;
            }
        }

        else if (stream.IsReading && !PhotonNetwork.IsMasterClient)
        {

            tranactionRecordContainer_json = (string)stream.ReceiveNext();

            tranactionRecordContainer = JsonUtility.FromJson<TranactionRecordContainer>(tranactionRecordContainer_json);
            if(clientUIManager != null)
            {
                clientUIManager.UpdateGraph(tranactionRecordContainer.session_transactions);
            }
            else
            {
                Debug.LogError(" client ui manager is null");
            }
        }
    }
}

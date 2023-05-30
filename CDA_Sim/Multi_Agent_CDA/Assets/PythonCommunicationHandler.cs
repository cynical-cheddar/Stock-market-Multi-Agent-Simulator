using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PythonCommunicationHandler : MonoBehaviour
{


    TraderBotManager traderBotManager;
    PythonCommunicatorInterface pythonCommunicatorInterface;

    private void Start()
    {
        traderBotManager = FindObjectOfType<TraderBotManager>();
        pythonCommunicatorInterface = FindObjectOfType<PythonCommunicatorInterface>();
    }

    // Requets Unity to change setup / active status of trader
    public void HandleRequestMessage(IncomingRequestMessage iqm)
    {
        int trader_pid = iqm.source_pid;
        string trader_tid = iqm.source_trader_id;
        if(iqm.requestType == RequestType.ActiveStatus)
        {
            // data contains active/setup status
            StatusAcknowledgement statusAcknowledgement = JsonUtility.FromJson<StatusAcknowledgement>(iqm.data);
            Debug.Log(iqm.data);
            bool setup = statusAcknowledgement.setup;
            bool active = statusAcknowledgement.active;


            // alert the trader bot manager to set bot[pid] to have setup and active values
            traderBotManager.SetBotSetupStatus(trader_pid, setup);
            traderBotManager.SetBotActiveStatus(trader_pid, active);
            // send an acknowledgement message back to the trader
            OutgoingAcknowledgementMessage msg = new OutgoingAcknowledgementMessage();
            msg.source_pid = -1;
            msg.source_trader_id = "";
            msg.target_pid = trader_pid;
            msg.messageType = MessageType.Acknowledgement;
            msg.data = "active_status_ack";
            // send command
            pythonCommunicatorInterface.SendOutgoingMessage(msg);
        }

        else if(iqm.requestType == RequestType.LimitOrderBook)
        {
            Debug.Log("Not implemented yet - LOB requested");
            OutgoingDataMessage msg = new OutgoingDataMessage();
            msg.source_pid = -1;
            msg.target_pid = trader_pid;
            msg.messageType = MessageType.Data;
            // replace when we get real LOB
            DummyLOB dummyLOB = new DummyLOB();
            dummyLOB.dummy_lob_text = "dummyLOB text";
            msg.data = JsonUtility.ToJson(dummyLOB);
            // send command
            pythonCommunicatorInterface.SendOutgoingMessage(msg);
        }
        else if(iqm.requestType == RequestType.BuyOrder)
        {
            Debug.Log("not yet implemented - buy order requested");
            // ^ do normal handling
            OutgoingAcknowledgementMessage msg = new OutgoingAcknowledgementMessage();
            msg.source_pid = -1;
            msg.source_trader_id = "";
            msg.target_trader_id = trader_tid;
            msg.target_pid = trader_pid;
            msg.messageType = MessageType.Acknowledgement;
            msg.data = "buy order acknowledge";
            // send command
            pythonCommunicatorInterface.SendOutgoingMessage(msg);
        }
        else if (iqm.requestType == RequestType.SellOrder)
        {
            Debug.Log("not yet implemented - sell order requested");
            // ^ do normal handling
            OutgoingAcknowledgementMessage msg = new OutgoingAcknowledgementMessage();
            msg.source_pid = -1;
            msg.source_trader_id = "";
            msg.target_trader_id = trader_tid;
            msg.target_pid = trader_pid;
            msg.messageType = MessageType.Acknowledgement;
            msg.data = "sell order acknowledge";
            // send command
            pythonCommunicatorInterface.SendOutgoingMessage(msg);
        }
    }



}

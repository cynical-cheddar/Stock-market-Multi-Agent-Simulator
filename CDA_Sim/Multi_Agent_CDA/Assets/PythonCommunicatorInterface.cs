using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public enum MessageType{
    Command,
    Data,
    Request,
    Acknowledgement
}

public enum CommandType
{
    LaunchTrader,
    DeactivateTrader,
    RequestTraderStatus,
    RequestAllTradersStatus
}

public enum DataType
{
    LimitOrderBook
}

public enum RequestType
{
    ActiveStatus,
    LimitOrderBook,
    PlaceBuyOrder,
    PlaceSellOrder
}

public enum OrderType
{
    Bid,
    Ask
}


[Serializable]
public class LaunchTraderData
{
    public string scriptName;
    public int instantiation_pid;
}

[Serializable]
public class StatusAcknowledgement
{
    public bool setup;
    public bool active;
}

[Serializable]
public class Order
{
    public OrderType orderType;
    public int quantity;
    public float unit_price;
}

[Serializable]
public class DummyLOB
{
    public string dummy_lob_text;
}


[Serializable]
public class Message
{
    public MessageType messageType;
    // pid 0 corresponds to the controller / trader manager
    public string source_trader_id;
    public string target_trader_id;
    public int source_pid;
    public int target_pid;
    public string data;
}

[Serializable]
public class OutgoingCommandMessage : Message
{
    public CommandType commandType;
}

[Serializable]
public class OutgoingDataMessage : Message
{
    public DataType dataType;
}

[Serializable]
public class IncomingRequestMessage : Message
{
    public RequestType requestType;
}
[Serializable]
public class OutgoingAcknowledgementMessage : Message
{
   
}




public class PythonCommunicatorInterface : MonoBehaviour
{

    PythonCommunicationHandler pythonCommunicationHandler;
    TraderBotManager traderBotManager;
    PythonCommunicator pythonCommunicator;

    private void Start()
    {
        pythonCommunicator = FindObjectOfType<PythonCommunicator>();
        traderBotManager = FindObjectOfType<TraderBotManager>();
        pythonCommunicationHandler = FindObjectOfType<PythonCommunicationHandler>();
    }

    public void LaunchTraderBotCommand(TraderBot traderBot)
    {
        // send the command to launch trader bot
        // send activation message with pid when validated and set up

        OutgoingCommandMessage launchTraderCommand = new OutgoingCommandMessage();
        launchTraderCommand.messageType = MessageType.Command;
        launchTraderCommand.source_pid = -1;
        
        LaunchTraderData launchTraderData = new LaunchTraderData();
        launchTraderData.scriptName = traderBot.tradingScriptName;
        launchTraderData.instantiation_pid = traderBot.pid;
        launchTraderCommand.target_pid = launchTraderData.instantiation_pid;
        launchTraderCommand.data = JsonUtility.ToJson(launchTraderData);


        
        SendOutgoingMessage(launchTraderCommand);
    }





    public void HandleIncomingMessage(string msg)
    {
        Debug.Log(">> " + msg);
        IncomingRequestMessage reqMessage = JsonUtility.FromJson<IncomingRequestMessage>(msg);
        // pass req message to handler
        pythonCommunicationHandler.HandleRequestMessage(reqMessage);
        /*
        try
        {
            

        }
        catch
        {
            Debug.Log("Json parse failure of " + msg + " to IncomingRequestMessage");
        }
        */
    }


    public void SendOutgoingMessage(OutgoingCommandMessage msg)
    {
        Debug.Log("sending command msg");
        pythonCommunicator.SendData(JsonUtility.ToJson(msg));
    }

    public void SendOutgoingMessage(OutgoingDataMessage msg)
    {
        Debug.Log("sending data msg");
        pythonCommunicator.SendData(JsonUtility.ToJson(msg));
    }
    public void SendOutgoingMessage(OutgoingAcknowledgementMessage msg)
    {
        Debug.Log("sending ack msg");
        pythonCommunicator.SendData(JsonUtility.ToJson(msg));
    }
    public void SendOutgoingMessage(Message msg)
    {
        Debug.LogError("Message " + msg.ToString() + " has no proper type! Set it to a child class");
    }


}

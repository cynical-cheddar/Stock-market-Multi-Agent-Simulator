using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public enum MessageType{
    Command,
    Data,
    Request
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
    LimitOrderBook
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
public class Message
{
    public MessageType messageType;
    // pid 0 corresponds to the controller / trader manager
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




public class PythonCommunicatorInterface : MonoBehaviour
{


    TraderBotManager traderBotManager;
    PythonCommunicator pythonCommunicator;

    private void Start()
    {
        pythonCommunicator = FindObjectOfType<PythonCommunicator>();
        traderBotManager = FindObjectOfType<TraderBotManager>();
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


        pythonCommunicator.SendData(JsonUtility.ToJson(launchTraderCommand));
    }





    public void HandleIncomingMessage(string msg)
    {
        Debug.Log(">> " + msg);
        try
        {
            IncomingRequestMessage reqMessage = JsonUtility.FromJson<IncomingRequestMessage>(msg);
            
        }
        catch
        {
            Debug.Log("Json parse failure of " + msg + " to IncomingRequestMessage");
        }
    }

    public void HandleIncomingRequest(IncomingRequestMessage reqMessage)
    {
        if(reqMessage.requestType == RequestType.ActiveStatus)
        {
            StatusAcknowledgement statusAcknowledgement = JsonUtility.FromJson<StatusAcknowledgement>(reqMessage.data);
            bool setup = statusAcknowledgement.setup;
            bool active = statusAcknowledgement.active;
            
            int pid = reqMessage.source_pid;
            // alert the trader bot manager to set bot[pid] to have setup and active values
            traderBotManager.SetBotSetupStatus(pid, setup);
            traderBotManager.SetBotActiveStatus(pid, active);
        }
        if (reqMessage.requestType == RequestType.LimitOrderBook)
        {
            Debug.Log("Not implemented yet - LOB requested");
        }
    }
}

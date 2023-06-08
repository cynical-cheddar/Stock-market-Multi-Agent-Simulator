using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TraderBotManager : MonoBehaviour
{

    public List<TraderBot> traderBots = new List<TraderBot>();
    public List<TraderBot> activeTraderBots = new List<TraderBot>();

    TestInputManager testInputManager;
    PythonCommunicatorInterface pythonCommunicatorInterface;
    AuctionSessionManager auctionSessionManager;
    AuctionMenuManager auctionMenuManager;

    int pid = 1;
    // B denotes bot
    // H denotes human
    string tid = "B1";

    bool message_server_connected = false;

    private void Start()
    {
        testInputManager = FindObjectOfType<TestInputManager>();
        pythonCommunicatorInterface = FindObjectOfType<PythonCommunicatorInterface>();
        auctionSessionManager = FindObjectOfType<AuctionSessionManager>();
        auctionMenuManager = FindObjectOfType<AuctionMenuManager>();
    }


    public void HandlePing()
    {
        if (!message_server_connected)
        {
            message_server_connected = true;
            if (auctionMenuManager != null)
            {
                auctionMenuManager.connectedToSocket = true;
            }
        }
        
    }

    void IncrementBotTid(int new_pid)
    {
        tid = "B" + new_pid.ToString();
    }

    public void CreateTraderBot(string scriptName)
    {
        TraderBot traderBot = FindObjectOfType<TraderBotsGoIdentifier>().gameObject.AddComponent<TraderBot>();
        traderBot.SetScriptName(scriptName);
        traderBot.SetPid(pid);
        traderBot.SetTraderTid(tid);
        LaunchTraderBot(traderBot);
        pid++;
        IncrementBotTid(pid);
    }

    public void LaunchTraderBot(TraderBot traderBot)
    {
        // send the command to launch trader bot
        // send activation message with pid when validated and set up
        traderBots.Add(traderBot);
        pythonCommunicatorInterface.LaunchTraderBotCommand(traderBot);
    }


    TraderBot GetTraderBotByPid(int pid)
    {
        foreach (TraderBot traderBot in traderBots)
        {
            if (traderBot.pid == pid)
            {
                return traderBot;
            }
        }
        return null;
    }

    TraderBot GetTraderBotByTid(string tid)
    {
        foreach (TraderBot traderBot in traderBots)
        {
            if (traderBot.tid == tid)
            {
                return traderBot;
            }
        }
        return null;
    }

    public void SetBotSetupStatus(int pid, bool setup_bool)
    {
        GetTraderBotByPid(pid).SetSetup(setup_bool);

        // inform 
        FindObjectOfType<AuctionSessionManager>().BotLoaded();
        FindObjectOfType<AuctionMenuManager>().UpdateLoadedBots();
    }

    public void SetTraderBotActiveCommand(int pid, bool active_bool)
    {
        // 
        pythonCommunicatorInterface.SetActiveTraderBotCommand(GetTraderBotByPid(pid), active_bool);
    }

    public void SetAllTraderBotsActiveCommand(bool active_bool)
    {
        foreach(TraderBot tb in traderBots)
        {
            pythonCommunicatorInterface.SetActiveTraderBotCommand(tb, active_bool);
        }
    }

    public void SetTraderBotActiveCommand(string tid, bool active_bool)
    {
        pythonCommunicatorInterface.SetActiveTraderBotCommand(GetTraderBotByTid(tid), active_bool);
    }
    public void SetBotActiveStatus(int pid, bool active_bool)
    {
        GetTraderBotByPid(pid).SetActive(active_bool);
    }
}

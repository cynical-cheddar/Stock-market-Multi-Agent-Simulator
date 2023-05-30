using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TraderBotManager : MonoBehaviour
{

    public List<TraderBot> traderBots = new List<TraderBot>();
    public List<TraderBot> activeTraderBots = new List<TraderBot>();

    TestInputManager testInputManager;
    PythonCommunicatorInterface pythonCommunicatorInterface;

    int pid = 1;
    // B denotes bot
    // H denotes human
    string tid = "B1";


    private void Start()
    {
        testInputManager = FindObjectOfType<TestInputManager>();
        pythonCommunicatorInterface = FindObjectOfType<PythonCommunicatorInterface>();
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

    public void SetBotSetupStatus(int pid, bool setup_bool)
    {
        GetTraderBotByPid(pid).SetSetup(setup_bool);
    }
    public void SetBotActiveStatus(int pid, bool active_bool)
    {
        GetTraderBotByPid(pid).SetActive(active_bool);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TraderBot : Trader
{
    public string tradingScriptName = "";
    public bool scriptRunning = false;
    public int pid = 0;

    public bool setup = false;
    public bool active = false;
    // Start is called before the first frame update
    protected override void Start()
    {
        base.Start();
        
    }

    public void SetActive(bool set)
    {
        active = set;
    }

    public void SetSetup(bool set)
    {
        setup = set;
        Debug.Log("Setup value has been changed");
    }

    public void SetScriptName(string scriptName)
    {
        traderDetails.ttype = scriptName;
        tradingScriptName = scriptName;
    }
    public void SetPid(int pid_local)
    {
        pid = pid_local;
    }



}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestInputManager : MonoBehaviour
{

    PythonCommunicator pythonCommunicator;
    TraderBotManager traderBotManager;
    int i = 0;
    // Start is called before the first frame update
    void Start()
    {
        pythonCommunicator = FindObjectOfType<PythonCommunicator>();
        traderBotManager = FindObjectOfType<TraderBotManager>();
    }

    public void CreateBot()
    {
        // when we get callback, then mark the bot as activated
        traderBotManager.CreateTraderBot("ZIC.py");
    }

    

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            CreateBot();
            i++;
        }
    }
}

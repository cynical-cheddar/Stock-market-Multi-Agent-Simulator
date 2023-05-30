using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trader : MonoBehaviour
{
    protected TestInputManager inputManager;
    public string tid = "";
    
    // Start is called before the first frame update
    protected virtual void Start()
    {
        inputManager = FindObjectOfType<TestInputManager>();
    }

    public void SetTraderTid(string new_tid)
    {
        tid = new_tid;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

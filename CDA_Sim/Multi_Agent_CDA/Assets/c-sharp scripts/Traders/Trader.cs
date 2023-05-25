using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trader : MonoBehaviour
{
    protected TestInputManager inputManager;
    // Start is called before the first frame update
    protected virtual void Start()
    {
        inputManager = FindObjectOfType<TestInputManager>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

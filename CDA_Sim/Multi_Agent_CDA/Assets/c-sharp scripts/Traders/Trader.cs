using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;




public enum TraderRole
{
    buyer,
    seller
}



public class Trader : MonoBehaviour
{
    protected TestInputManager inputManager;

    public string ttype = "";
    public string tid = "";
    public int balance = 0;
    public List<TransactionRecord> blotter = new List<TransactionRecord>();
    public int blotter_length = 15;
    public List<LOB_Order> orders = new List<LOB_Order>();
    public int n_quotes = 0;

    public TraderRole traderRole;

    [PunRPC]

    public void SetTraderRole_RPC(int traderRole_int)
    {
        traderRole = (TraderRole)traderRole_int;
    }

    
    // Start is called before the first frame update
    protected virtual void Start()
    {
        inputManager = FindObjectOfType<TestInputManager>();
    }

    public void SetTraderTid(string new_tid)
    {
        tid = new_tid;
    }


    // send RPC to the master LOB with order encoded via JSON
    public void Add_Order(LOB_Order order)
    {

    }

    // send RPC to the master LOB with order encoded via JSON

    public void Del_Order(LOB_Order order)
    {

    }

    public void BookKeep(TransactionRecord trade, LOB_Order order, float time)
    {

    }
}

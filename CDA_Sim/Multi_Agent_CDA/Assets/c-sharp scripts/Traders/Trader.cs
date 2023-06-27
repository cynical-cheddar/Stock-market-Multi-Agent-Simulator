using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using System;
using System.ComponentModel;
using System.Drawing;
using System.Runtime.CompilerServices;



public enum TraderRole
{
    buyer,
    seller,
    unassigned,
}



[Serializable]
public class TraderDetails 
{
    public string ttype = "";
    public string tid = "";
    public int balance = 0;
    public int profit = 0;
    public List<PersonalTransactionRecord> blotter = new List<PersonalTransactionRecord>();
    public int blotter_length = 15;
    public List<LOB_Order> orders = new List<LOB_Order>();
    public int n_quotes = 0;
    public TraderRole traderRole;
    public MyCurrentAssignment myCurrentAssignment;




    public TraderDetails()
    {
        ttype = "";
        tid = "";
        balance = 0;
        profit = 0;
        blotter = new List<PersonalTransactionRecord>();
        blotter_length = 15;
        orders = new List<LOB_Order>();
        n_quotes = 0;
        traderRole = TraderRole.unassigned;
    }
}




public class Trader : MonoBehaviour
{
    protected TestInputManager inputManager;

    // cache used by BSE to store clearing data
    protected List<QuantisedTransactionRecord> quantisedTransactionRecordCache = new List<QuantisedTransactionRecord> ();


    protected List<PersonalTransactionRecord> personalTransactionRecords = new List<PersonalTransactionRecord>();


    public TraderDetails traderDetails;


    BSE bse;



    public void SetAssignment(Assignment assignment)
    {
        
        traderDetails.myCurrentAssignment = new MyCurrentAssignment();
        traderDetails.myCurrentAssignment.assignment_id = assignment.assignment_id;
        traderDetails.myCurrentAssignment.current_quantity = 0;
        traderDetails.myCurrentAssignment.oType = assignment.oType;
        traderDetails.myCurrentAssignment.price_threshold = assignment.price_threshold;
        traderDetails.myCurrentAssignment.quantity_target = assignment.quantity_target;

        // now cancel all current orders
        foreach(LOB_Order order in traderDetails.orders)
        {
            Debug.Log("Cancelling order " + order.Debug_Order());
            bse.RemoveOrder(order);
        }
        
    }


    // generates transaction records and notifies self of each unit bought/sold
    public List<PersonalTransactionRecord> GetAndClearTransactionCache()
    {
        Debug.Log("GetAndClearTransactionCache");
        List<PersonalTransactionRecord>  transactionRecords = new List<PersonalTransactionRecord>();
        List<int> uniquePrices = new List<int> ();
        foreach(QuantisedTransactionRecord record in quantisedTransactionRecordCache)
        {
            // count number of unique prices
            if(!uniquePrices.Contains(record.price)) uniquePrices.Add(record.price);
            // also make a note of purchase/sell
            UnitTransacted(record);
        }
        foreach(int uniquePrice in uniquePrices)
        {
            PersonalTransactionRecord personalTransactionRecord = new PersonalTransactionRecord();
            foreach (QuantisedTransactionRecord record in quantisedTransactionRecordCache)
            {
                if(record.price == uniquePrice)
                {
                    personalTransactionRecord.price = record.price;
                    personalTransactionRecord.quantity += 1;
                    personalTransactionRecord.total_price = uniquePrice * personalTransactionRecord.quantity;
                    personalTransactionRecord.transactionParticipants_tid = record.transactionParticipants_tid;
                    personalTransactionRecord.type = record.type;
                    personalTransactionRecord.time = record.time;
                    if (traderDetails.traderRole == TraderRole.buyer) personalTransactionRecord.orderType = OrderType.Bid;
                    else if (traderDetails.traderRole == TraderRole.seller) personalTransactionRecord.orderType = OrderType.Ask;
                    else
                    {
                        Debug.LogError("Trade trying to happen with unassigned trader! tid:" + traderDetails.tid);
                    }

                }
            }
            transactionRecords.Add(personalTransactionRecord);
        }


        ClearTransactionCache();
        return transactionRecords;
    }

    void UnitTransacted(QuantisedTransactionRecord transaction)
    {
        if(traderDetails.traderRole == TraderRole.buyer)
        {
            Debug.Log("unit bought at: " + transaction.price.ToString());
        }
        else if(traderDetails.traderRole == TraderRole.seller)
        {
            Debug.Log("unit sold at: " + transaction.price.ToString());
        }
    }

    public void ClearTransactionCache()
    {
        quantisedTransactionRecordCache.Clear();
    }
    public void AddQuantisedRecordToCache(QuantisedTransactionRecord q_record)
    {
        quantisedTransactionRecordCache.Add(q_record);
    }



    protected virtual void Awake()
    {
        traderDetails = new TraderDetails();
        bse = FindObjectOfType<BSE>();
    }



    [PunRPC]

    public void SetTraderRole_RPC(int traderRole_int)
    {
        traderDetails.traderRole = (TraderRole)traderRole_int;
        Debug.Log("set trader role of trader " + traderDetails.tid + " to " + traderDetails.traderRole.ToString());
    }

    
    // Start is called before the first frame update
    protected virtual void Start()
    {
        inputManager = FindObjectOfType<TestInputManager>();
    }

    public void SetTraderTid(string new_tid)
    {
        traderDetails.tid = new_tid;
    }


    // remember! transaction records can be order, remove, or trade
    
    public virtual void BookKeep(PersonalTransactionRecord record)
    {
        if(traderDetails.blotter.Count > traderDetails.blotter_length)
        {
            traderDetails.blotter.RemoveAt(0);
        }
         traderDetails.blotter.Add(record);
    }

    public virtual void AddProfit(int transaction_profit)
    {
        traderDetails.profit += transaction_profit;
    }

    public void SetMyOrdersFromBSE()
    {
        BSE bse = FindObjectOfType<BSE>();
        List<LOB_Order> myOrders = new List<LOB_Order>();
        foreach(LOB_Order order in bse.exchange.orders)
        {
            if(order.tid == traderDetails.tid)
            {
                myOrders.Add(order);
            }
        }
        traderDetails.orders.Clear();
        traderDetails.orders = myOrders;
        traderDetails.n_quotes = traderDetails.orders.Count;
        // trader details will be synced to other clients including the target's human trader interface
    }

    public virtual void Order_Add_Success()
    {
        SetMyOrdersFromBSE();
    }
    public virtual void Order_Remove_Success()
    {
        SetMyOrdersFromBSE();
    }
}

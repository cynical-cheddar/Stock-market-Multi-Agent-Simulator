using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;

public static class Extensions
{
    public static List<List<T>> partition<T>(this List<T> values, int chunkSize)
    {
        return values.Select((x, i) => new { Index = i, Value = x })
            .GroupBy(x => x.Index / chunkSize)
            .Select(x => x.Select(v => v.Value).ToList())
            .ToList();
    }

    public static void Shuffle<T>(this IList<T> list)
    {
        System.Random rng = new System.Random();
        int n = list.Count;
        while (n > 1)
        {
            n--;
            int k = rng.Next(n + 1);
            T value = list[k];
            list[k] = list[n];
            list[n] = value;
        }
    }
}




public class LOB_Order
{
    public string tid;          // trader id
    public OrderType otype;     // order type
    public int price;           // price per unit
    public int quantity;        // quantity
    public float time;          // timestamp
    public int qid;             // quote id

    public void Debug_Order()
    {
        Debug.Log("tid: " + tid.ToString() + " oType " + otype.ToString() + " price: " + price.ToString() + " quantity: " + quantity.ToString() + " time: " + time.ToString() + " qid " + qid.ToString());
    }
}

public enum BookType
{
    Bids,
    Asks
}





public class LOB_Orderbook_Half
{
    public BookType bookType;
    public List<LOB_Order> orders;


    public int best_price;
    public string best_tid;
    public int worst_price;
    public int session_extreme;
    public int n_orders;
    public int lob_depth;

    public void Build_LOB()
    {

    }

    public void Book_Add()
    {

    }

    public void Book_Del()
    {

    }

    public void Delete_Best()
    {

    }
}

public class LOB_Orderbook : LOB_Orderbook_Half
{

    public List<LOB_Order> bids;
    public List<LOB_Order> asks;
    public List<string> tape;
    public int tape_length = 100000; // max number of events on tape (so we can do millions of orders without crashing)
    public int quote_id = 0;        // unique ID code for each quote accepted onto the book
    public string lob_string = "";  //character-string linearization of public lob items with nonzero quantities
}


public enum TransactionType
{
    Trade,
    Cancel,
}

public class TransactionRecord
{
    public TransactionType type;
    public float time;
    public int price;
    public string party1_tid;
    public string party2_tid;
    public int quantity;
}



public class AnonymousOrder
{
    public OrderType orderType;
    public int price;
    public int quantity;

}


// synchronise an instance of this class with JSON

// this is the *anonymous* class
public class SynchronisedLOB
{
    public List<AnonymousOrder> bids = new List<AnonymousOrder>();
    public List<AnonymousOrder> asks = new List<AnonymousOrder>();
}




public class LOB_Exchange : LOB_Orderbook
{
    public void Add_Order(LOB_Order order)
    {

    }

    public void Del_Order(float time, LOB_Order order)
    {

    }


    //# receive an order and either add it to the relevant LOB (ie treat as limit order)
    //# or if it crosses the best counterparty offer, execute it (treat as a market order)
    public TransactionRecord Process_Order_2(float time, LOB_Order order)
    {




        TransactionRecord record = new TransactionRecord();
        return record;
    }
    
}











public class BSE : MonoBehaviour
{


    int bse_sys_minprice = 1;              // minimum price in the system, in cents/pennies
    int bse_sys_maxprice = 500;                  // maximum price in the system, in cents/pennies



    public string synchronised_LOB_JSON = "";
    SynchronisedLOB synchronisedLOB = new SynchronisedLOB();
    LOB_Exchange exchange = new LOB_Exchange();

    public List<Trader> traders = new List<Trader>();
    public List<Trader> buyers = new List<Trader>();
    public List<Trader> sellers = new List<Trader>();
    // when a human joins the game, they should request the master client to instantiate a
    // human trader and give them a trader interface



    // should include a dump trade stats function
    public void DumpTradeStats()
    {

    }

    void GatherTradersFromEnvironment()
    {
        traders.Clear();
        traders.AddRange(FindObjectsOfType<Trader>());
    }

    int Sysmin_Check(int price)
    {
        if(price < bse_sys_minprice)
        {
            return bse_sys_minprice;
        }
        return price;
    }
    int Sysmax_Check(int price)
    {
        if(price > bse_sys_maxprice)
        {
            return bse_sys_maxprice;
        }
        else
        {
            return price;
        }
    }

    // randomise and sort traders into buyers and sellers 
    void RandomiseTradersIntoBuyersAndSellers()
    {
        // clear buyer and seller lists
        buyers.Clear();
        sellers.Clear();
        // shuffle list of traders
        traders.Shuffle();
        List<List<Trader>> partitions = traders.partition(traders.Count / 2);
        buyers = partitions[0];
        sellers = partitions[1];
    }

    void MarketSession()
    {
        exchange = new LOB_Exchange();
        GatherTradersFromEnvironment();
        RandomiseTradersIntoBuyersAndSellers();
        // inform each trader that they are a buyer/seller
    }

    

































    void Start()
    {
       
    }

    // Update is called once per frame

    // create a new whenever there is a change in state of the main LOB
    void Update()
    {
        
    }
}

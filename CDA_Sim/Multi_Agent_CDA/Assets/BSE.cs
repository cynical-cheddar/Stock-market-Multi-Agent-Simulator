using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.UI;
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



[Serializable]
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
    public List<LOB_Order> orders = new List<LOB_Order>();


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

    public List<LOB_Order> bids = new List<LOB_Order>();
    public List<LOB_Order> asks = new List<LOB_Order>();
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
        if (order.otype == OrderType.Bid)
        {
            bids.Add(order);
        }
        else if ( order.otype == OrderType.Ask)
        {
            asks.Add(order);
        }
        BuildFullOrderList();
    }

    public void BuildFullOrderList()
    {
        orders.Clear();
        orders.AddRange(bids);
        orders.AddRange(asks);
    }

    public void Del_Order(float time, LOB_Order remove_order)
    {
        int remove_index = 0;
        if (remove_order.otype == OrderType.Ask) {
            foreach (LOB_Order ask in asks)
            {
                if (ask.qid == remove_order.qid)
                {
                    break;
                }
                remove_index++;
            }
            asks.RemoveAt(remove_index);
        }
        else if(remove_order.otype == OrderType.Bid)
        {
            foreach (LOB_Order bid in bids)
            {
                if (bid.qid == remove_order.qid)
                {
                    break;
                }
                remove_index++;
            }
            bids.RemoveAt(remove_index);
        }

        BuildFullOrderList();
    }


    //# receive an order and either add it to the relevant LOB (ie treat as limit order)
    //# or if it crosses the best counterparty offer, execute it (treat as a market order)
    public TransactionRecord Process_Order_2(float time, LOB_Order order)
    {




        TransactionRecord record = new TransactionRecord();
        return record;
    }
    
}











public class BSE : MonoBehaviour, IPunObservable
{


    int bse_sys_minprice = 1;              // minimum price in the system, in cents/pennies
    int bse_sys_maxprice = 500;                  // maximum price in the system, in cents/pennies


    string last_synchronised_LOB_JSON = "";
    public string synchronised_LOB_JSON = "";
    SynchronisedLOB synchronisedLOB = new SynchronisedLOB();
    public LOB_Exchange exchange = new LOB_Exchange();

    public List<Trader> traders = new List<Trader>();
    public List<Trader> buyers = new List<Trader>();
    public List<Trader> sellers = new List<Trader>();

    HumanTraderInterface myHumanTraderInterface;

    int cur_q_id = 0;

    // the current time in the market session defined by (Time.time - sessionStartTime_System)k
    float currentTime = 0.0f;
    // the start of the market session with regards to Time.Time
    float sessionStartTime_System = 0.0f;

    public bool market_active = false;

    Trader GetTraderFromTid(string tid)
    {
        foreach (Trader t in traders)
        {
            if(t.traderDetails.tid == tid)
            {
                return t;
            }
        }
        Debug.LogError("Could not find trader with tid: " + tid + ". Does it exist or is it part of BSE.traders?");
        return null;
    }


    // remove an order from the LOB, then send a new copy of the trader's orders upon success via RPC
    public void RemoveOrder(LOB_Order remove_order)
    {
        // remove the order from the exchange
        exchange.Del_Order(currentTime, remove_order);


        // rebuild synchronisedLOB
        // the synchronised LBO automatically syncs
        BuildSynchronisedLOB();

        Trader t = GetTraderFromTid(remove_order.tid);
        t.Order_Remove_Success();
    }

    // add an order to the LOB, then send a new copy of the trader's orders upon success via RPC
    public void AddOrder(LOB_Order add_order)
    {
        add_order.qid = cur_q_id;
        add_order.time = synchronised_current_time;
        // increment counter
        cur_q_id++;
        // add to book
        exchange.Add_Order(add_order);

        // rebuild synchronisedLOB
        BuildSynchronisedLOB();


        // if this was a success, then send an RPC to the trader with appropriate tid. This will eitehr update the UI (if human) or send an acknowledgement to python (if bot)
        Trader t = GetTraderFromTid(add_order.tid);
        t.Order_Add_Success();
    }




    // when a human joins the game, they should request the master client to instantiate a
    // human trader and give them a trader interface

    // build the syncrhonised LOB from the exchange

    // TODO: we need to build the synchronised LOB
    void BuildSynchronisedLOB()
    {
        
    }

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

        int half = traders.Count/2;
        for(int i = 0; i < half; i++)
        {
            buyers.Add(traders[i]);
        }
        for(int i = half; i < traders.Count; i++)
        {
            sellers.Add(traders[i]);
        }
        



    }

    void SetTraderRoles()
    {
        foreach (Trader t in buyers)
        {
            if (t.GetType() == typeof(TraderHuman))
            {
                t.GetComponent<PhotonView>().RPC(nameof(t.SetTraderRole_RPC), RpcTarget.All, (int)TraderRole.buyer);
            }
            else if (t.GetType() == typeof(TraderBot))
            {
                t.SetTraderRole_RPC((int)TraderRole.buyer);
            }
        }

        foreach (Trader t in sellers)
        {
            if (t.GetType() == typeof(TraderHuman))
            {
                t.GetComponent<PhotonView>().RPC(nameof(t.SetTraderRole_RPC), RpcTarget.All, (int)TraderRole.seller);
            }
            else if (t.GetType() == typeof(TraderBot))
            {
                t.SetTraderRole_RPC((int)TraderRole.seller);
            }
        }
    }

    bool has_hti = false;

    [PunRPC]

    public void FindMyHumanTraderInterface()
    {
        if (!PhotonNetwork.IsMasterClient)
        {
             HumanTraderInterface[] htis = FindObjectsOfType<HumanTraderInterface>();
            foreach(HumanTraderInterface hti in htis)
            {
                if(hti.GetComponent<PhotonView>() != null)
                {
                    if (hti.GetComponent<PhotonView>().IsMine)
                    {
                        myHumanTraderInterface = hti;
                        has_hti = true;

                        FindObjectOfType<ClientUIManager>().SetHumanTraderInterface(myHumanTraderInterface);

                    }
                }
            }
        }

    }


    IEnumerator SetupMarket()
    {
        yield return new WaitForSeconds(0.1f);
        exchange = new LOB_Exchange();
        GatherTradersFromEnvironment();
        RandomiseTradersIntoBuyersAndSellers();
        // inform each trader that they are a buyer/seller
        yield return new WaitForSeconds(0.5f);
        SetTraderRoles();
        yield return new WaitForSeconds(0.5f);
        // if we are not the master client, find our trader interface
        GetComponent<PhotonView>().RPC(nameof(FindMyHumanTraderInterface), RpcTarget.All);

        // start the session clock:
        sessionStartTime_System = Time.time;

        market_active = true;

        yield return null;
    }


    public void MarketSession()
    {
        StartCoroutine(nameof(SetupMarket));


    }






    // ============== COMMS ================
    float synchronised_current_time = 0f;
    float last_synchronised_current_time = 0f;
    float synchronised_market_close_time = 120f;

    public InputField json_override_input_field;
    public void UpdateLOB_JsonForced_From_Input_Field()
    {
        UpdateLOB_JsonForced(json_override_input_field.text);
    }

    public void UpdateLOB_JsonForced(string new_lob_json)
    {
        synchronised_LOB_JSON = new_lob_json;
        Debug.Log("UpdateLOB_JsonForced: " + new_lob_json);
    }

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting && PhotonNetwork.IsMasterClient)
        {
            if (synchronised_LOB_JSON != last_synchronised_LOB_JSON)
            {
                stream.SendNext(synchronised_LOB_JSON);
                last_synchronised_LOB_JSON = synchronised_LOB_JSON;
            }
        }

        else if (stream.IsReading && !PhotonNetwork.IsMasterClient)
        {
            
            synchronised_LOB_JSON = (string)stream.ReceiveNext();
            Debug.Log("Sync lob " + synchronised_LOB_JSON);
            // alert the trader interfaces
            if (has_hti) myHumanTraderInterface.Set_LOB_Json(synchronised_LOB_JSON);
        }
    }


    AuctionSessionManager auctionSessionManager;
    void Start()
    {
        auctionSessionManager = FindObjectOfType<AuctionSessionManager>();
    }

    // Update is called once per frame

    // create a new whenever there is a change in state of the main LOB
    void Update()
    {
        if (PhotonNetwork.IsMasterClient && market_active)
        {
            synchronised_current_time = Time.time - sessionStartTime_System;
            auctionSessionManager.synchronised_current_time = synchronised_current_time;
            auctionSessionManager.synchronised_closeTime = synchronised_market_close_time;
        }
    }


}

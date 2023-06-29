using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.UI;
using org.mariuszgromada.math.mxparser;


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



// a quantised order is a single unit of a commodity, produced from a standard LOB_Order
[Serializable]
public class Quantised_LOB_Order
{
    public LOB_Order originalOrder;
    public int quantised_qid;
    public int price;
}



[Serializable]
public class ClearingPair
{
    public Quantised_LOB_Order ask;
    public Quantised_LOB_Order bid;
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

    public string Debug_Order()
    {
        return ("tid: " + tid.ToString() + " oType " + otype.ToString() + " price: " + price.ToString() + " quantity: " + quantity.ToString() + " time: " + time.ToString() + " qid " + qid.ToString());
    }
}


[Serializable]
public enum BookType
{
    Bids,
    Asks
}




[Serializable]
public class LOB_Orderbook_Half
{
    public BookType bookType;
    public List<LOB_Order> orders = new List<LOB_Order>();
}
[Serializable]
public class LOB_Orderbook : LOB_Orderbook_Half
{

    public List<LOB_Order> bids = new List<LOB_Order>();
    public List<LOB_Order> asks = new List<LOB_Order>();

    public List<Quantised_LOB_Order> quantised_bids = new List<Quantised_LOB_Order>();
    public List<Quantised_LOB_Order> quantised_asks = new List<Quantised_LOB_Order>();


    public List<string> tape;
    public List<TransactionRecord> session_transactions = new List<TransactionRecord>();

    public int tape_length = 100000; // max number of events on tape (so we can do millions of orders without crashing)
    public int quote_id = 0;        // unique ID code for each quote accepted onto the book
    public string lob_string = "";  //character-string linearization of public lob items with nonzero quantities
}

[Serializable]
public enum TransactionType
{
    Trade,
    Cancel,
}
[Serializable]
public class TransactionParticipants
{
    public string buyer_tid;
    public string seller_tid;
    public TransactionParticipants(string b_tid, string s_tid)
    {
        buyer_tid = b_tid;
        seller_tid = s_tid;
    }
}
[Serializable]
public class QuantisedTransactionRecord
{
    public TransactionType type;
    public float time;
    public int price;
    public TransactionParticipants transactionParticipants_tid;
}

[Serializable]
public class TransactionRecord
{
    public TransactionType type;
    public float time;
    public int price;
    public int total_price;
    public TransactionParticipants transactionParticipants_tid;
    public int quantity;

    public TransactionRecord()
    {
        type = TransactionType.Trade;
        time = 0.0f;
        price = 0;
        total_price = 0;
        transactionParticipants_tid = new TransactionParticipants("", "");
        quantity = 0;
    }
}
[Serializable]
public class PersonalTransactionRecord : TransactionRecord
{
    public OrderType orderType;
    public int profit = 0;
    public int assignment_price = 0;
    public PersonalTransactionRecord()
    {
        type = TransactionType.Trade;
        time = 0.0f;
        price = 0;
        total_price = 0;
        transactionParticipants_tid = new TransactionParticipants("", "");
        quantity = 0;
        orderType = OrderType.Bid;
        profit = 0;
        assignment_price = 0;
        
    }

    public string DebugRecord()
    {
        string return_string = "";
        string buysell = "BUY";
        string minMax = "MAX";
        if (orderType == OrderType.Ask) { buysell = "SELL"; minMax = "MIN"; }

        if (type == TransactionType.Trade)
        {
            

            return_string = Mathf.FloorToInt(time).ToString() + "s " + buysell + " " + quantity.ToString() + "@ £" + price.ToString() + "[Assignment " + minMax + " £" + assignment_price.ToString() + "] Profit £" + (profit-1).ToString(); 
        }
        if(type == TransactionType.Cancel)
        {
            return_string = Mathf.FloorToInt(time).ToString() + "s CANCEL " + buysell + " " + quantity.ToString() + "@ £" + price.ToString();
        }

        return return_string;
    }
}


[Serializable]
public class AnonymousOrder
{
    public OrderType orderType;
    public int price;
    public int quantity;

}


// synchronise an instance of this class with JSON

// this is the *anonymous* class
[Serializable]
public class SynchronisedLOB
{
    public List<AnonymousOrder> bids = new List<AnonymousOrder>();
    public List<AnonymousOrder> asks = new List<AnonymousOrder>();

    // highest bid
    public AnonymousOrder bestBid = new AnonymousOrder();
    // lowest bid
    public AnonymousOrder worstBid = new AnonymousOrder();


    // lowest ask
    public AnonymousOrder bestAsk = new AnonymousOrder();
    // highest ask
    public AnonymousOrder worstAsk = new AnonymousOrder();
}





[Serializable]
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
        bool found = false;
        int remove_index = 0;
        if (remove_order.otype == OrderType.Ask) {
            foreach (LOB_Order ask in asks)
            {
                if (ask.qid == remove_order.qid)
                {
                    found = true;
                    break;
                }
                remove_index++;
            }

            if(found) asks.RemoveAt(remove_index);
        }
        else if(remove_order.otype == OrderType.Bid)
        {
            foreach (LOB_Order bid in bids)
            {
                if (bid.qid == remove_order.qid)
                {
                    found = true;
                    break;
                }
                remove_index++;
            }
            if (found) bids.RemoveAt(remove_index);
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

[Serializable]
public class Assignment
{
    public int assignment_id;
    public OrderType oType;
    public int price_threshold;
    public int quantity_target;
    public float next_assignment_time;
}

[Serializable]
public class MyCurrentAssignment : Assignment
{
    public int current_quantity;
}

[Serializable]
public class AssignmentScheduleItem
{
    public Assignment assignment;
    public string tid;
    public float time;
    
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


    public GameSettings gameSettings;

    public List<AssignmentScheduleItem> assignmentSchedule = new List<AssignmentScheduleItem>();

    public List<AssignmentScheduleItem> assignmentSchedule_issued = new List<AssignmentScheduleItem>();



    Function demand_offset = new Function("f(t) = t");
    Function supply_offset = new Function("f(t) = t");


    int CalcPriceSupply(int t_i, int time, TraderRole role)
    {
        int t_count = 0;
        if (role == TraderRole.buyer) t_count = buyers.Count;
        if (role == TraderRole.seller) t_count = sellers.Count;
        int supplyPrice = 0;
        if (gameSettings.supply_stepmode == Stepmode.Fixed)
        {
            // get number of intervals/cycles over the running_time
            // linearly interpolate over number of traders
            int supplyDiff = gameSettings.supply_max - gameSettings.supply_min;
            supplyPrice = gameSettings.supply_min + ((supplyDiff / t_count) * t_i) + Convert.ToInt32(Math.Round(supply_offset.calculate(time)));
        }
        if (gameSettings.supply_stepmode == Stepmode.Random)
        {
            // generate random int between supply min and max
            supplyPrice = UnityEngine.Random.Range(gameSettings.supply_min, gameSettings.supply_max) + Convert.ToInt32(Math.Round(supply_offset.calculate(time)));
        }
        if (gameSettings.supply_stepmode == Stepmode.Jitter)
        {
            int supplyDiff = gameSettings.supply_max - gameSettings.supply_min;
            int space = (supplyDiff / t_count);
            supplyPrice = gameSettings.supply_min + ((supplyDiff / t_count) * t_i) + Convert.ToInt32(Math.Round(supply_offset.calculate(time)));
            supplyPrice += Convert.ToInt32(UnityEngine.Random.Range(-0.5f * space, 0.5f * space));
        }

        supplyPrice = Sysmax_Check(supplyPrice);
        supplyPrice = Sysmin_Check(supplyPrice);
        return supplyPrice;
    }

    int CalcPriceDemand(int t_i, int time, TraderRole role)
    {
        int t_count = 0;
        if (role == TraderRole.buyer) t_count = buyers.Count;
        if (role == TraderRole.seller) t_count = sellers.Count;
        int demandPrice = 0;
        if (gameSettings.supply_stepmode == Stepmode.Fixed)
        {
            // get number of intervals/cycles over the running_time
            // linearly interpolate over number of traders
            int demandDiff = gameSettings.demand_max - gameSettings.demand_min;
            demandPrice = gameSettings.supply_min + ((demandDiff / t_count) * t_i) + Convert.ToInt32(Math.Round(demand_offset.calculate(time)));
        }
        if (gameSettings.supply_stepmode == Stepmode.Random)
        {
            // generate random int between supply min and max
            demandPrice = UnityEngine.Random.Range(gameSettings.demand_min, gameSettings.demand_max) + Convert.ToInt32(Math.Round(demand_offset.calculate(time)));
        }
        if (gameSettings.supply_stepmode == Stepmode.Jitter)
        {
            int demandDiff = gameSettings.demand_max - gameSettings.demand_min;
            int space = (demandDiff / t_count);
            demandPrice = gameSettings.supply_min + ((demandDiff / t_count) * t_i) + Convert.ToInt32(Math.Round(demand_offset.calculate(time)));
            demandPrice += Convert.ToInt32(UnityEngine.Random.Range(-0.5f * space, 0.5f * space));
        }

        demandPrice = Sysmax_Check(demandPrice);
        demandPrice = Sysmin_Check(demandPrice);
        return demandPrice;
    }



    void GenerateAssignmentSchedule()
    {
        assignmentSchedule.Clear();
        // make sure session settings are not null
        gameSettings = FindObjectOfType<SessionSettings>().gameSettings;

        supply_offset = new Function(gameSettings.supply_offset_function);
        demand_offset = new Function(gameSettings.demand_offset_function);

        // for every assignment
        int a_id = 1;
        // number of allocation cycles over the simulation
        int n = gameSettings.running_time / gameSettings.assignment_cycle;
        // int number of allocation cycles elapsed
        int i = 0;

        // t jumps of assignment_cycle - denotes time
        for (int t = 0; t<gameSettings.running_time; t+= gameSettings.assignment_cycle)
        {
            Debug.Log(t);
            // ALL AT ONCE ALLOCATION
            if(gameSettings.allocation == Allocation.All)
            {
                Debug.Log(t.ToString() + "allocation.all");
                int b_i = 0;
                int s_i = 0;
                foreach (Trader b in buyers)
                {
                    Debug.Log(t.ToString() + "allocation.all" + b.traderDetails.tid);
                    AssignmentScheduleItem assignmentScheduleItem = new AssignmentScheduleItem();
                    assignmentScheduleItem.tid = b.traderDetails.tid;
                    assignmentScheduleItem.time = (float)t;
                    assignmentScheduleItem.assignment = new Assignment();
                    assignmentScheduleItem.assignment.assignment_id = a_id;
                    assignmentScheduleItem.assignment.oType = OrderType.Bid;
                    assignmentScheduleItem.assignment.quantity_target = gameSettings.assignment_volume;
                    assignmentScheduleItem.assignment.next_assignment_time = 0;

                    int demandPrice = CalcPriceDemand(b_i, t, TraderRole.buyer);

                    assignmentScheduleItem.assignment.price_threshold = demandPrice;
                    // add item to the list
                    assignmentSchedule.Add(assignmentScheduleItem);
                    a_id++;
                    b_i++;
                }

                // ==============

                foreach (Trader s in sellers)
                {
                    Debug.Log(t.ToString() + "allocation.all" + s.traderDetails.tid);
                    AssignmentScheduleItem assignmentScheduleItem = new AssignmentScheduleItem();
                    assignmentScheduleItem.tid = s.traderDetails.tid;
                    assignmentScheduleItem.time = (float)t;
                    assignmentScheduleItem.assignment = new Assignment();
                    assignmentScheduleItem.assignment.assignment_id = a_id;
                    assignmentScheduleItem.assignment.oType = OrderType.Ask;
                    assignmentScheduleItem.assignment.quantity_target = gameSettings.assignment_volume;
                    assignmentScheduleItem.assignment.next_assignment_time = 0;

                    int supplyPrice = CalcPriceSupply(b_i, t, TraderRole.seller);

                    assignmentScheduleItem.assignment.price_threshold = supplyPrice;
                    // add item to the list
                    assignmentSchedule.Add(assignmentScheduleItem);
                    a_id++;
                    s_i++;
                }
            }
            else if(gameSettings.allocation == Allocation.Drip)
            {
                Debug.Log(t.ToString() + "allocation.Drip");
                int b_i = 0;
                int s_i = 0;
                int buyer_gap_interval = gameSettings.assignment_cycle / buyers.Count;
                int seller_gap_interval = gameSettings.assignment_cycle / sellers.Count;

                foreach (Trader b in buyers)
                {
                    Debug.Log(t.ToString() + "allocation.Drip" + b.traderDetails.tid);
                    AssignmentScheduleItem assignmentScheduleItem = new AssignmentScheduleItem();
                    assignmentScheduleItem.tid = b.traderDetails.tid;
                    assignmentScheduleItem.time = (float)t + (float)(buyer_gap_interval * b_i);
                    assignmentScheduleItem.assignment = new Assignment();
                    assignmentScheduleItem.assignment.assignment_id = a_id;
                    assignmentScheduleItem.assignment.oType = OrderType.Bid;
                    assignmentScheduleItem.assignment.quantity_target = gameSettings.assignment_volume;
                    assignmentScheduleItem.assignment.next_assignment_time = 0;

                    int supplyPrice = CalcPriceDemand(b_i, t, TraderRole.buyer);

                    assignmentScheduleItem.assignment.price_threshold = supplyPrice;
                    // add item to the list
                    assignmentSchedule.Add(assignmentScheduleItem);
                    a_id++;
                    b_i++;
                }

                // ==============

                foreach (Trader s in sellers)
                {
                    Debug.Log(t.ToString() + "allocation.Drip" + s.traderDetails.tid);
                    AssignmentScheduleItem assignmentScheduleItem = new AssignmentScheduleItem();
                    assignmentScheduleItem.tid = s.traderDetails.tid;
                    assignmentScheduleItem.time = (float)t + seller_gap_interval * s_i;
                    assignmentScheduleItem.assignment = new Assignment();
                    assignmentScheduleItem.assignment.assignment_id = a_id;
                    assignmentScheduleItem.assignment.oType = OrderType.Ask;
                    assignmentScheduleItem.assignment.quantity_target = gameSettings.assignment_volume;
                    assignmentScheduleItem.assignment.next_assignment_time = 0;

                    int supplyPrice = CalcPriceSupply(b_i, t, TraderRole.seller);

                    assignmentScheduleItem.assignment.price_threshold = supplyPrice;
                    // add item to the list
                    assignmentSchedule.Add(assignmentScheduleItem);
                    a_id++;
                    s_i++;
                }
            }
            else if(gameSettings.allocation == Allocation.Poisson)
            {
                Debug.LogError("Allocation.Poisson not implemented");
            }
            else
            {
                Debug.LogError("Mate that aint even an allocation type u willy");
            }

            i++;
            
        }

        // now, foreach trader, run through the assignmentSchedule backwards, setting assignmentScheduleItem.next_assignment_time as the previous time
        foreach(Trader t in traders)
        {
            string t_tid = t.traderDetails.tid;
            float laterAssignmentTime = 0;
            
            for(int j = assignmentSchedule.Count -1; j >= 0; j--)
            {
                if(assignmentSchedule[j].tid == t_tid)
                {
                    assignmentSchedule[j].assignment.next_assignment_time = laterAssignmentTime;
                    laterAssignmentTime = assignmentSchedule[j].time;
                }
            }
        }

        // now order assignment schedule by time
        // assignmentSchedule
        assignmentSchedule = assignmentSchedule.OrderBy(a => a.time).ToList();

        // allocation mode is order time within cycle
        // allocation cycle is cycle interval

        // stepmode refers to order cost

        // offset function is not yet implemented



    }



    LOB_Order GetHighestBid()
    {
        int highestBid = 0;
        LOB_Order highestBidOrder = new LOB_Order();
        highestBidOrder.price = -1;
        foreach (LOB_Order bid in exchange.bids)
        {
            if(bid.price > highestBid)
            {
                highestBid = bid.price;
                highestBidOrder = bid;
            }
        }
        return highestBidOrder;
    }

    LOB_Order GetLowestAsk()
    {
        int lowestAsk = 999999999;
        LOB_Order lowestAskOrder = new LOB_Order();
        lowestAskOrder.price = 999999999;
        foreach (LOB_Order ask in exchange.bids)
        {
            if (ask.price < lowestAsk)
            {
                lowestAsk = ask.price;
                lowestAskOrder = ask;
            }
        }
        return lowestAskOrder;
    }

    List<Quantised_LOB_Order> QuantiseOrders(List<LOB_Order> orders)
    {
        // create n * quantity of orders, each with a reference to the original order
        List<Quantised_LOB_Order> quantised_orders = new List<Quantised_LOB_Order>();
        foreach(LOB_Order o in orders)
        {
            for(int i = 0; i < o.quantity; i++)
            {
                Quantised_LOB_Order quantised_order = new Quantised_LOB_Order();
                quantised_order.quantised_qid = i;
                quantised_order.originalOrder = o;
                quantised_order.price = o.price;
                quantised_orders.Add(quantised_order);
            }
        }
        return quantised_orders;
    }


    void PerformTrades(List<ClearingPair> clearingPairs, OrderType newOrderType)
    {
        // we have quantised_bids as a global
        // we have quantised_asks as a global

        //List<TransactionRecord> quantisedTransactionRecords = new List<TransactionRecord>();

        foreach (ClearingPair pair in clearingPairs)
        {


            Trader buyer = GetTraderFromTid(pair.bid.originalOrder.tid);
            Trader seller = GetTraderFromTid(pair.ask.originalOrder.tid);

            QuantisedTransactionRecord q_record = new QuantisedTransactionRecord();
            q_record.time = synchronised_current_time;
            q_record.price = (pair.bid.price);
            q_record.transactionParticipants_tid = new TransactionParticipants(pair.bid.originalOrder.tid, pair.ask.originalOrder.tid);
            q_record.type = TransactionType.Trade;
            

            buyer.AddQuantisedRecordToCache(q_record);
            seller.AddQuantisedRecordToCache(q_record);

            // remove from quantised lists
            exchange.quantised_bids.Remove(pair.bid);
            exchange.quantised_asks.Remove(pair.ask);
        }

        // gather stats from all traders to build transaction records
        
        foreach(Trader t in traders)
        {
            List<PersonalTransactionRecord> personalTransactionRecords = t.GetAndClearTransactionCache();
            // if there exists transactions
            if(personalTransactionRecords.Count > 0)
            {
                foreach(PersonalTransactionRecord record in personalTransactionRecords)
                {
                    // add the impersonal record to BSE
                    TransactionRecord impersonalRecord = new TransactionRecord();
                    impersonalRecord.type = record.type;
                    impersonalRecord.time = record.time;
                    impersonalRecord.quantity = record.quantity;
                    impersonalRecord.transactionParticipants_tid = record.transactionParticipants_tid;
                    impersonalRecord.price = record.price;
                    impersonalRecord.total_price = record.total_price;
                    // we only need to poll the buyers to get the general list
                    if (t.traderDetails.traderRole == TraderRole.buyer) exchange.session_transactions.Add(impersonalRecord);


                    // send the personal record to the trader, who will inform the trader via RPC (if human) or via socket server (if bot)
                    t.BookKeep(record);
                }
            }
        }


        exchange.bids = GenerateOrdersFromQuantised(OrderType.Bid);
        exchange.asks = GenerateOrdersFromQuantised(OrderType.Ask);
        exchange.orders.Clear();
        exchange.orders.AddRange(exchange.bids);
        exchange.orders.AddRange(exchange.asks);

        exchange.quantised_bids.Clear();
        exchange.quantised_asks.Clear();

        exchange.quantised_bids = QuantiseOrders(exchange.bids);
        exchange.quantised_asks = QuantiseOrders(exchange.asks);

        foreach (Trader t in traders)
        {
            t.SetMyOrdersFromBSE();
        }

        BuildSynchronisedLOB();

    }

    List<LOB_Order> GenerateOrdersFromQuantised(OrderType oType)
    {
        // now iterate through each uniqueQuoteIds_bids and build a list of LOB_Orders for bids
        // build a new LOB from quantised transaction records
        // firstly, rejoin original quotes
        List<int> uniqueQuoteIds= new List<int>();
        List<LOB_Order> newOrders = new List<LOB_Order>();
        if (oType == OrderType.Bid)
        {
            foreach (Quantised_LOB_Order q_order in exchange.quantised_bids)
            {
                if (!uniqueQuoteIds.Contains(q_order.originalOrder.qid))
                {
                    uniqueQuoteIds.Add(q_order.originalOrder.qid);
                }
            }

            
            foreach (int q_id in uniqueQuoteIds)
            {
                LOB_Order o = new LOB_Order();
                o.otype = oType;
                o.quantity = 0;
                foreach (Quantised_LOB_Order q_order in exchange.quantised_bids)
                {
                    if (q_order.originalOrder.qid == q_id)
                    {
                        o.time = q_order.originalOrder.time;
                        o.qid = q_id;
                        o.quantity++;
                        o.price = q_order.originalOrder.price;
                        o.tid = q_order.originalOrder.tid;
                    }
                }
                newOrders.Add(o);
            }
        }
        else if(oType == OrderType.Ask)
        {
            foreach (Quantised_LOB_Order q_order in exchange.quantised_asks)
            {
                if (!uniqueQuoteIds.Contains(q_order.originalOrder.qid))
                {
                    uniqueQuoteIds.Add(q_order.originalOrder.qid);
                }
            }

            
            foreach (int q_id in uniqueQuoteIds)
            {
                LOB_Order o = new LOB_Order();
                o.otype = oType;
                o.quantity = 0;
                foreach (Quantised_LOB_Order q_order in exchange.quantised_asks)
                {
                    if (q_order.originalOrder.qid == q_id)
                    {
                        o.time = q_order.originalOrder.time;
                        o.qid = q_id;
                        o.quantity++;
                        o.price = q_order.originalOrder.price;
                        o.tid = q_order.originalOrder.tid;
                    }
                }
                newOrders.Add(o);
            }
        }

        return newOrders;
    }


    List<ClearingPair> GetClearingPairs()
    {
        List<ClearingPair> clearingPairs = new List<ClearingPair>();
        // quantise the LOB:
        exchange.quantised_bids = QuantiseOrders(exchange.bids);
        exchange.quantised_asks = QuantiseOrders(exchange.asks);

        exchange.quantised_bids = exchange.quantised_bids.OrderByDescending(bid => bid.price).ToList();
        exchange.quantised_asks = exchange.quantised_asks.OrderBy(ask => ask.price).ToList();

        int n_bids = exchange.quantised_bids.Count;
        int n_asks = exchange.quantised_asks.Count;

        int n = 0;

        if (n_bids > n_asks) n = n_asks;
        else n = n_bids;

        // iterate through both lists
        for (int i = 0; i < n; i++)
        {

            Quantised_LOB_Order q_bid = exchange.quantised_bids[i];
            Quantised_LOB_Order q_ask = exchange.quantised_asks[i];
            if(q_bid.price >= q_ask.price)
            {
                ClearingPair pair = new ClearingPair();
                pair.ask = q_ask;
                pair.bid = q_bid;
                clearingPairs.Add(pair);
                Debug.Log("Clearing pair: " + pair.ask.originalOrder.Debug_Order() + "and " + pair.bid.originalOrder.Debug_Order());
            }
            // if out of pice range, because the lists are sorted, no more transactions may be valid
            else
            {
                break;
            }
        }
        return clearingPairs;

    }


    public void CheckForMatchings(OrderType oType)
    {
        // check if the highest bid price is greater than or equal to the lowest asking price
        if (exchange.bids.Count > 0 && exchange.asks.Count > 0)
        {
            LOB_Order lowestAsk = GetLowestAsk();
            LOB_Order highestBid = GetHighestBid();
            // a trade may occur
            if (lowestAsk.price <= highestBid.price)
            {
                // get a set of quantised clearing pairs
                List<ClearingPair> clearingPairs = GetClearingPairs();
                // perform trades, inform traders, then reconstruct the LOB
                if (clearingPairs.Count > 0) PerformTrades(clearingPairs, oType);
                else Debug.LogError("no clearing pairs found despite lowestAsk.price < highestBid.price");


            }
        }
    }



    // remove an order from the LOB, then send a new copy of the trader's orders upon success via RPC
    public void RemoveOrder(LOB_Order remove_order)
    {
        // remove the order from the exchange
        exchange.Del_Order(currentTime, remove_order);

        exchange.quantised_bids = QuantiseOrders(exchange.bids);
        exchange.quantised_asks = QuantiseOrders(exchange.asks);


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
        Debug.Log(add_order.Debug_Order());
        // increment counter
        cur_q_id++;
        // add to book
        exchange.Add_Order(add_order);

        exchange.quantised_bids = QuantiseOrders(exchange.bids);
        exchange.quantised_asks = QuantiseOrders(exchange.asks);

        // the exchange has been updated, check for potential matchings and perform selling
        CheckForMatchings(add_order.otype);

        // rebuild synchronisedLOB
        BuildSynchronisedLOB();


        // if this was a success, then send an RPC to the trader with appropriate tid. This will eitehr update the UI (if human) or send an acknowledgement to python (if bot)
        Trader t = GetTraderFromTid(add_order.tid);
        t.Order_Add_Success();
    }






    // ============================ ADMIN ======================================================



    Trader GetTraderFromTid(string tid)
    {
        foreach (Trader t in traders)
        {
            if (t.traderDetails.tid == tid)
            {
                return t;
            }
        }
        Debug.LogError("Could not find trader with tid: " + tid + ". Does it exist or is it part of BSE.traders?");
        return null;
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

        GenerateAssignmentSchedule();

        market_active = true;

        yield return null;
    }


    public void MarketSession()
    {
        StartCoroutine(nameof(SetupMarket));


    }






    // ============== COMMS ===========================================================




    float synchronised_current_time = 0f;
    float last_synchronised_current_time = 0f;
    float synchronised_market_close_time = 120f;

    public InputField json_override_input_field;



    // build the syncrhonised LOB from the exchange
    void BuildSynchronisedLOB()
    {
        synchronisedLOB = new SynchronisedLOB();



        // =========== BIDS
        List<LOB_Order> bids = exchange.bids;
        // order bids by price
        bids = bids.OrderBy(bid => bid.price).ToList();
        // 1st bid is the best bid
        bids.Reverse();

        // add bids to book
        foreach (LOB_Order b in bids)
        {
            AnonymousOrder anonymousBid = new AnonymousOrder();
            anonymousBid.price = b.price;
            anonymousBid.quantity = b.quantity;
            anonymousBid.orderType = b.otype;
            synchronisedLOB.bids.Add(anonymousBid);
        }

        // TODO::
        List<int> uniquePrices = new List<int>();
        foreach(AnonymousOrder ao in synchronisedLOB.bids)
        {
            
        }

        // if there exist multiple anonymous orders of the same price, then collate them into a single bid

        if (synchronisedLOB.bids.Count > 0)
        {
            synchronisedLOB.bestBid = synchronisedLOB.bids[0];
            synchronisedLOB.worstBid = synchronisedLOB.bids.Last();
        }



        // =========== ASKS
        List<LOB_Order> asks = exchange.asks;
        // order asks by price
        // 1st ask is the best ask
        asks = asks.OrderBy(ask => ask.price).ToList();

        // add asks to book
        foreach (LOB_Order a in asks)
        {
            AnonymousOrder anonymousAsk = new AnonymousOrder();
            anonymousAsk.price = a.price;
            anonymousAsk.quantity = a.quantity;
            anonymousAsk.orderType = a.otype;
            synchronisedLOB.asks.Add(anonymousAsk);
        }
        if (synchronisedLOB.asks.Count > 0)
        {
            synchronisedLOB.bestAsk = synchronisedLOB.asks[0];
            synchronisedLOB.worstAsk = synchronisedLOB.asks.Last();
        }


        // set the new synchronised lob json string
        synchronised_LOB_JSON = JsonUtility.ToJson(synchronisedLOB);
    }



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
        if (PhotonNetwork.IsMasterClient)
        {
            gameSettings = FindObjectOfType<SessionSettings>().gameSettings;
            synchronised_market_close_time = gameSettings.running_time;
        }
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


            if(synchronised_current_time > assignmentSchedule[0].time)
            {
                // issue the assignment to the trader with relevant tid
                Trader t = GetTraderFromTid(assignmentSchedule[0].tid);
                t.SetAssignment(assignmentSchedule[0].assignment);

                // add to graveyard list
                assignmentSchedule_issued.Add(assignmentSchedule[0]);
                // remove
                assignmentSchedule.RemoveAt(0);
                
            }
        }
    }


}

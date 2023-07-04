using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
public class Full_LOB_UI : MonoBehaviour
{

    public Transform bids_listview;
    public Transform asks_listview;
    public GameObject bid_menu_item_prefab;
    public GameObject ask_menu_item_prefab;

    List<GameObject> bids_list = new List<GameObject>();
    List<GameObject> asks_list = new List<GameObject>();
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void UpdateLOB_View(LOB_Exchange exchange)
    {
        foreach(GameObject bid_menu in bids_list)
        {
            Destroy(bid_menu);
        }
        foreach (GameObject ask_menu in asks_list)
        {
            Destroy(ask_menu);
        }

        bids_list.Clear();
        asks_list.Clear();



        // now sort and collate 
        // =========== BIDS
        List<LOB_Order> bids = exchange.bids;
        // order bids by price
        bids = bids.OrderBy(bid => bid.price).ToList();
        // 1st bid is the best bid
        bids.Reverse();

        // if there exist multiple anonymous orders of the same price, then collate them into a single bid
        // =========== COLLATE BIDS ===============
        List<int> uniquePrices = new List<int>();
        foreach (LOB_Order bid in bids)
        {
            if (!uniquePrices.Contains(bid.price)) uniquePrices.Add(bid.price);
        }

        List<LOB_Order_Extended_Traders> collatedBids = new List<LOB_Order_Extended_Traders>();
        foreach (int price in uniquePrices)
        {
            LOB_Order_Extended_Traders collatedOrder = new LOB_Order_Extended_Traders();
            collatedOrder.common_tids = new List<string>();
            collatedOrder.quantity = 0;
            foreach (LOB_Order bid in bids)
            {
                if (bid.price == price)
                {
                    collatedOrder.price = bid.price;
                    collatedOrder.otype = bid.otype;
                    collatedOrder.quantity += bid.quantity;
                    if (!collatedOrder.common_tids.Contains(bid.tid))
                    {
                        collatedOrder.common_tids.Add(bid.tid);
                    }
                }
            }
            collatedBids.Add(collatedOrder);
        }

        // =========== ASKS
        List<LOB_Order> asks = exchange.asks;
        // order bids by price
        asks = asks.OrderBy(ask => ask.price).ToList();



        // =========== COLLATE ASKS ===============
        uniquePrices = new List<int>();
        foreach (LOB_Order ask in asks)
        {
            if (!uniquePrices.Contains(ask.price)) uniquePrices.Add(ask.price);
        }

        List<LOB_Order_Extended_Traders> collatedAsks = new List<LOB_Order_Extended_Traders>();
        foreach (int price in uniquePrices)
        {
            LOB_Order_Extended_Traders collatedOrder = new LOB_Order_Extended_Traders();
            collatedOrder.common_tids = new List<string>();
            collatedOrder.quantity = 0;
            foreach (LOB_Order ask in asks)
            {
                if (ask.price == price)
                {
                    collatedOrder.price = ask.price;
                    collatedOrder.otype = ask.otype;
                    collatedOrder.quantity += ask.quantity;
                    if (!collatedOrder.common_tids.Contains(ask.tid))
                    {
                        collatedOrder.common_tids.Add(ask.tid);
                    }
                }
            }
            collatedAsks.Add(collatedOrder);
        }














        foreach (LOB_Order_Extended_Traders bid in collatedBids)
        {
            GameObject order_menu_item = Instantiate(bid_menu_item_prefab, bids_listview);
            GeneralMenuOrderItem menu_item = order_menu_item.GetComponent<GeneralMenuOrderItem>();
            menu_item.SetupMenuItem(bid);
            bids_list.Add(order_menu_item);
        }

        foreach (LOB_Order_Extended_Traders ask in collatedAsks)
        {
            GameObject order_menu_item = Instantiate(ask_menu_item_prefab, asks_listview);
            GeneralMenuOrderItem menu_item = order_menu_item.GetComponent<GeneralMenuOrderItem>();
            menu_item.SetupMenuItem(ask);
            asks_list.Add(order_menu_item);
        }





    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

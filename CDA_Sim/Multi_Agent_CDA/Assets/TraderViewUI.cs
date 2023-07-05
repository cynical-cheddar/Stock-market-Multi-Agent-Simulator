using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TraderViewUI : MonoBehaviour
{

    public Transform traderListListview;
    public GameObject adminTraderMenuItemPrefab;
    List<GameObject> traderListMenuItems = new List<GameObject>();
    BSE bse;

    string current_tid_view = "";


    [Header("Trader stuff UI")]
    public Text traderProfitText;
    public Text traderFulfilmentText;
    public Text traderAssignmentText;

    public Transform LOB_bids_listview;
    public Transform LOB_asks_listview;

    
    public Transform my_orders_listview;


    [Header("Trader stuff Prefabs")]
    public GameObject order_menu_prefab;

    public GameObject my_order_menu_item_prefab;


    List<GameObject> bid_menu_list = new List<GameObject>();
    List<GameObject> ask_menu_list = new List<GameObject>();

    List<GameObject> my_orders_menu_list = new List<GameObject>();

    [Header("Blotter")]
    public Transform blotterListViewTransform;
    public GameObject blotterListItemPrefab;

    // Start is called before the first frame update
    void Start()
    {
        bse = FindObjectOfType<BSE>();

        
    }

    public void UpdateInfo()
    {
        if (current_tid_view != "")
        {
            Trader t = bse.GetTraderFromTid(current_tid_view);
            traderProfitText.text = "£" + t.traderDetails.profit.ToString();


            UpdateMyAssignment(t.traderDetails.myCurrentAssignment);
            BuildSynchronisedLOB(bse.synchronisedLOB);
            UpdateMyOrders(t.traderDetails.orders);
            UpdateMyBlotter(t.traderDetails.blotter);
        }
        else
        {
            Debug.LogError("Please don't try and set tid to nothing");
        }
    }

    public void SetCurrentView(string tid)
    {
        if (tid != "")
        {
            current_tid_view = tid;
            Trader t = bse.GetTraderFromTid(tid);
            traderProfitText.text = "£" + t.traderDetails.profit.ToString();


            UpdateMyAssignment(t.traderDetails.myCurrentAssignment);
            BuildSynchronisedLOB(bse.synchronisedLOB);
            UpdateMyOrders(t.traderDetails.orders);
            UpdateMyBlotter(t.traderDetails.blotter);
        }
        else
        {
            Debug.LogError("Please don't try and set tid to nothing");
        }


        //
    }

    public void UpdateTraderListView(List<Trader> traders)
    {
        foreach (GameObject item in traderListMenuItems)
        {
            Destroy(item);
        }
        traderListMenuItems.Clear();

        foreach (Trader trader in traders)
        {
            GameObject menu_item = Instantiate(adminTraderMenuItemPrefab, traderListListview);
            menu_item.GetComponent<AdminTraderMenuItem>().SetupMenuItem(trader.traderDetails, this);
            traderListMenuItems.Add(menu_item);
        }

        // now check for any change in my tid
        if (current_tid_view != "") {
            SetCurrentView(current_tid_view);
        }
    }

    // copied code from client UI manager



    public void BuildSynchronisedLOB(SynchronisedLOB synchronisedLOB)
    {
        foreach (GameObject go in bid_menu_list)
        {
            Destroy(go);
        }
        foreach (GameObject go in ask_menu_list)
        {
            Destroy(go);
        }


        bid_menu_list.Clear();
        ask_menu_list.Clear();

        foreach (AnonymousOrder bid in synchronisedLOB.bids)
        {
            GameObject bid_label = Instantiate(order_menu_prefab, LOB_bids_listview);
            bid_label.GetComponent<OrderIndexer>().priceText.text = "£" + bid.price.ToString();
            bid_label.GetComponent<OrderIndexer>().volumeText.text = bid.quantity.ToString();
            bid_menu_list.Add(bid_label);
        }

        foreach (AnonymousOrder ask in synchronisedLOB.asks)
        {
            GameObject ask_label = Instantiate(order_menu_prefab, LOB_asks_listview);
            ask_label.GetComponent<OrderIndexer>().priceText.text = "£" + ask.price.ToString();
            ask_label.GetComponent<OrderIndexer>().volumeText.text = ask.quantity.ToString();
            ask_menu_list.Add(ask_label);
        }
    }


    public void UpdateMyOrders(List<LOB_Order> myOrders)
    {
        foreach (GameObject go in my_orders_menu_list)
        {
            Destroy(go);
        }
        my_orders_menu_list.Clear();

        foreach (LOB_Order order in myOrders)
        {
            GameObject order_menu_item = Instantiate(my_order_menu_item_prefab, my_orders_listview);
            MyOrderMenuItem menu_item = order_menu_item.GetComponent<MyOrderMenuItem>();
            menu_item.SetupMenuItemInactive(order);
            my_orders_menu_list.Add(order_menu_item);
        }
    }

    public void UpdateMyBlotter(List<PersonalTransactionRecord> records)
    {
        foreach (Transform child in blotterListViewTransform)
        {
            Destroy(child.gameObject);
        }
        records.Reverse();
        foreach (PersonalTransactionRecord record in records)
        {
            GameObject blotterItemInstance = Instantiate(blotterListItemPrefab, blotterListViewTransform);
            blotterItemInstance.GetComponent<Text>().text = record.DebugRecord(record.assignment_price);

        }
    }

    public void UpdateMyAssignment(MyCurrentAssignment assignment)
    {

        traderFulfilmentText.text = assignment.current_quantity.ToString() + "/" + assignment.quantity_target.ToString();


        if (assignment.quantity_target == 0)
        {
            traderAssignmentText.text = "AWAITING ASSIGNMENT";
        }

        else if (assignment.oType == OrderType.Bid)
        {
            traderAssignmentText.text = "BUY " + assignment.quantity_target.ToString() + ", MAX PRICE £" + assignment.price_threshold.ToString() + ". DEADLINE AT " + ((int)assignment.next_assignment_time) + "s";
        }
        else if (assignment.oType == OrderType.Ask)
        {
            traderAssignmentText.text = "SELL " + assignment.quantity_target.ToString() + ", MIN PRICE £" + assignment.price_threshold.ToString() + ". DEADLINE AT " + ((int)assignment.next_assignment_time) + "s";
        }
    }




}

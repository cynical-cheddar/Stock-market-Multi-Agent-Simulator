using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;






public class ClientUIManager : MonoBehaviour
{
    // Start is called before the first frame update


    public GameObject order_menu_prefab;

    public Transform LOB_bids_listview;

    public Transform LOB_asks_listview;


   

    List<GameObject> bid_menu_list = new List<GameObject>();

    List<GameObject> ask_menu_list = new List<GameObject>();

    public Text profitText;

    public InputField orderQuantity_field;
    public InputField limitPrice_field;

    public GameObject my_order_menu_item_prefab;
    public Transform my_orders_listview;
    List<GameObject> my_orders_menu_list = new List<GameObject>();

    HumanTraderInterface myHumanTraderInterface;

    public Text curTimeText;
    public Text marketCloseTimeText;

    public Text output_my_orders;

    [Header("Blotter")]
    public Transform blotterListViewTransform;
    public GameObject blotterListItemPrefab;

    public AudioSource audioSource;
    public AudioClip failure_error_order_sound;
    public AudioClip failure_network_order_sound;

    public AudioClip success_add_order_sound;
    public AudioClip success_cancel_order_sound;

    public AudioClip beep;


    public void SetCurrentTime(float curTime, float marketCloseTime)
    {
        curTimeText.text =  ((int)curTime).ToString();
        marketCloseTimeText.text = ((int)marketCloseTime).ToString();
    }

    // when we get a profit update from the trader, through the human trader interface, then update our profit on the UI
    public void UpdateTraderUI(TraderDetails traderDetails)
    {
        Debug.Log("UpdateTraderUI with: " + JsonUtility.ToJson(traderDetails));

        // update my orders
        UpdateMyOrders(traderDetails.orders);

        // Update my blotter
        UpdateMyBlotter(traderDetails.blotter);

        // update my profit
        profitText.text = "£" + traderDetails.profit.ToString();

        audioSource.PlayOneShot(beep);
    }

    public void UpdateMyBlotter(List<PersonalTransactionRecord> records)
    {
        foreach(Transform child in blotterListViewTransform)
        {
            Destroy(child.gameObject);
        }
        records.Reverse();
        foreach (PersonalTransactionRecord record in records)
        {
            GameObject blotterItemInstance = Instantiate(blotterListItemPrefab, blotterListViewTransform);
            blotterItemInstance.GetComponent<Text>().text = record.DebugRecord();
            
        }
    }





    public void UpdateMyOrders(List<LOB_Order> myOrders)
    {
        foreach(GameObject go in my_orders_menu_list)
        {
            Destroy(go);
        }
        my_orders_menu_list.Clear();

        foreach(LOB_Order order in myOrders)
        {
            GameObject order_menu_item = Instantiate(my_order_menu_item_prefab, my_orders_listview);
            MyOrderMenuItem menu_item = order_menu_item.GetComponent<MyOrderMenuItem>();
            menu_item.SetupMenuItem(order, this);
            my_orders_menu_list.Add(order_menu_item);
        }
        
    }



    public void SetHumanTraderInterface(HumanTraderInterface hti)
    {
        myHumanTraderInterface = hti;
        
    }

    // cancel / remove order
    public void CancelOrderRequest(LOB_Order cancel_order)
    {
        myHumanTraderInterface.CancelOrderRequest(cancel_order);
    }

    // add order
    public void AddOrderRequest(LOB_Order add_order)
    {
        myHumanTraderInterface.AddOrderRequest(add_order);
        output_my_orders.text = "";
    }

    public void AddOrderRequest_Success()
    {
        Debug.Log("AddOrderRequest_Success");
        audioSource.PlayOneShot(success_add_order_sound);
    }
    public void CancelOrderRequest_Success()
    {
        Debug.Log("CancelOrderRequest_Success");
        audioSource.PlayOneShot(success_cancel_order_sound);
    }

    public void AddOrderRequest_Click()
    {
        LOB_Order add_order_request = new LOB_Order();
        // if we are a buyer
        if(myHumanTraderInterface.my_traderHuman.traderDetails.traderRole == TraderRole.buyer)
        {
            add_order_request.otype = OrderType.Bid;
        }
        // if we are a seller
        if (myHumanTraderInterface.my_traderHuman.traderDetails.traderRole == TraderRole.seller)
        {
            add_order_request.otype = OrderType.Ask;
        }
        if (myHumanTraderInterface.my_traderHuman.traderDetails.traderRole == TraderRole.unassigned)
        {
            Debug.LogError("Client UI manager is trying to put an order in for a trader that is marked unassigned: tid:" + myHumanTraderInterface.my_traderHuman.traderDetails.tid);
            output_my_orders.text = "trader currently unassigned";
            return;
        }
        // order price
        try
        {
            add_order_request.price = int.Parse(limitPrice_field.text);
            if(add_order_request.price < 1)
            {
                audioSource.PlayOneShot(failure_error_order_sound);
                output_my_orders.text = "price may not be zero or negative";
                return;
            }
            else if(add_order_request.price > 999999)
            {
                audioSource.PlayOneShot(failure_error_order_sound);
                output_my_orders.text = "price too high";
                return;
            }
        }
        catch
        {
            audioSource.PlayOneShot(failure_error_order_sound);
            output_my_orders.text = "price parse fail";
            return;
        }
        // order quantity
        try
        {
            add_order_request.quantity = int.Parse(orderQuantity_field.text);
        }
        catch
        {
            audioSource.PlayOneShot(failure_error_order_sound);
            output_my_orders.text = "quantity parse fail";
            return;
        }
        //tid

        add_order_request.tid = myHumanTraderInterface.my_traderHuman.traderDetails.tid;

        // QID and TIME are added by the master client
        AddOrderRequest(add_order_request);


    }

    public void NetworkFailure()
    {
        audioSource.PlayOneShot(failure_network_order_sound);
        output_my_orders.text = "network RPC fail";
    }



    // when we get an update from the humantraderinterface, update the LOB
    public void BuildLobFronJson(string lob_Json)
    {
        try
        {
            SynchronisedLOB synchronisedLOB_test = JsonUtility.FromJson<SynchronisedLOB>(lob_Json);
        }
        catch
        {
            Debug.LogError("synchronisedLOB from lob_Json failure: " + lob_Json);
            return;
        }

        SynchronisedLOB synchronisedLOB = JsonUtility.FromJson<SynchronisedLOB>(lob_Json);


        foreach (GameObject go in bid_menu_list)
        {
            Destroy(go);
        }
        foreach (GameObject go in ask_menu_list)
        {
            Destroy(go);
        }


        foreach(AnonymousOrder bid in synchronisedLOB.bids)
        {
            GameObject bid_label = Instantiate(order_menu_prefab, LOB_bids_listview);
            bid_label.GetComponent<OrderIndexer>().priceText.text = "£" + bid.price.ToString();
            bid_label.GetComponent<OrderIndexer>().volumeText.text = bid.quantity.ToString();
            bid_menu_list.Add(bid_label);
        }

        foreach(AnonymousOrder ask in synchronisedLOB.asks)
        {
            GameObject ask_label = Instantiate(order_menu_prefab, LOB_asks_listview);
            ask_label.GetComponent<OrderIndexer>().priceText.text = "£" + ask.price.ToString();
            ask_label.GetComponent<OrderIndexer>().volumeText.text = ask.quantity.ToString();
            ask_menu_list.Add(ask_label);
        }

    }

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

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



    // when we get a profit update from the trader, through the human trader interface, then update our profit on th UI
    public void UpdateTraderUI(TraderDetails traderDetails)
    {
        Debug.Log("Trader details gotten");
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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MyOrderMenuItem : MonoBehaviour
{
    public Text volume_text;
    public Text price_text;
    public LOB_Order thisOrder;
    ClientUIManager clientUIManager;

    public void SetupMenuItem(LOB_Order order, ClientUIManager clientUIManager_local)
    {
        thisOrder = order;
        volume_text.text = thisOrder.quantity.ToString();
        price_text.text = "£" + thisOrder.price.ToString();
        clientUIManager = clientUIManager_local;
    }

    public void CancelOrder_Click()
    {
        clientUIManager.CancelOrderRequest(thisOrder);
    }
}

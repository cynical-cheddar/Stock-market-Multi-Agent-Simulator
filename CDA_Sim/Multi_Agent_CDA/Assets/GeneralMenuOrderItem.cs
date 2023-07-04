using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
public class GeneralMenuOrderItem : MonoBehaviour
{
    public Text volume_text;
    public Text price_text;
    public Text tid_text;
    public LOB_Order thisOrder;

    public void SetupMenuItem(LOB_Order_Extended_Traders order)
    {
        thisOrder = order;
        volume_text.text = thisOrder.quantity.ToString();
        price_text.text = "£" + thisOrder.price.ToString();
        tid_text.text = String.Join(",", order.common_tids);
    }




}

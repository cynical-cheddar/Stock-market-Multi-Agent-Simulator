using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;



public class AdminTraderMenuItem : MonoBehaviour
{



    public Text tid_and_role_text;
    public Text profit_text;

    TraderViewUI traderViewUI;

    string my_tid = "";


    public void SetupMenuItem(TraderDetails traderDetails, TraderViewUI ui)
    {
        my_tid = traderDetails.tid;
        traderViewUI = ui;

        if (traderDetails.traderRole == TraderRole.buyer) tid_and_role_text.text = my_tid + " - BUYER";
        if (traderDetails.traderRole == TraderRole.seller) tid_and_role_text.text = my_tid + " - SELLER";

        profit_text.text = "£" + traderDetails.profit.ToString();
    }

    public void ClickMenuItem()
    {
        traderViewUI.SetCurrentView(my_tid);
    }
}

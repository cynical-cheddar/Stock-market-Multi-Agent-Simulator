using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class AdminUIManager : MonoBehaviour
{


    public GameObject lob_page;
    public GameObject trader_view_page;
    public GameObject graph_page;
    public GameObject menu_page;

    public Text market_closed_text;

    public void CloseMarket()
    {
        market_closed_text.enabled = true;
    }


    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1) && PhotonNetwork.IsMasterClient)
        {
            Lob_Page_Click();
        }
        else if (Input.GetKeyDown(KeyCode.Alpha2) && PhotonNetwork.IsMasterClient)
        {
            Trader_Page_Click();
        }
        else if (Input.GetKeyDown(KeyCode.Alpha3) && PhotonNetwork.IsMasterClient)
        {
            Graph_Page_Click();
        }
        else if (Input.GetKeyDown(KeyCode.Alpha4) && PhotonNetwork.IsMasterClient)
        {
            Menu_Page_Click();
        }
    }

    public void Lob_Page_Click()
    {
        lob_page.SetActive(true);
        trader_view_page.SetActive(false);
        graph_page.SetActive(false);
        menu_page.SetActive(false);
    }

    public void Trader_Page_Click()
    {
        lob_page.SetActive(false);
        trader_view_page.SetActive(true);
        graph_page.SetActive(false);
        menu_page.SetActive(false);
    }

    public void Graph_Page_Click()
    {
        lob_page.SetActive(false);
        trader_view_page.SetActive(false);
        graph_page.SetActive(true);
        menu_page.SetActive(false);

        FindObjectOfType<BSE>().ForceShowWindowGraph();
    }

    public void Menu_Page_Click()
    {
        lob_page.SetActive(false);
        trader_view_page.SetActive(false);
        graph_page.SetActive(false);
        menu_page.SetActive(true);
    }

}

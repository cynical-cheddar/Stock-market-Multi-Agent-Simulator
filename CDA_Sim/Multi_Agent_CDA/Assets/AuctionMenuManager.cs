using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class AuctionMenuManager : MonoBehaviour
{
    public List<GameObject> panel_gameobjects = new List<GameObject> ();

    public GameObject emptyPanel;
    public GameObject adminStartPanel;
    public GameObject clientStartPanel;

    public GameObject adminGamePanel;
    public GameObject clientGamePanel;

    public Text current_connected_players_text;
    public Text players_in_room_text;

    public Text currentBotsLoaded_text;
    public Text maxBots_text;

    public Button instantiateBotsButton;

    public bool connectedToSocket = false;
    bool buttonPressed = false;

    public Text output;
    public AudioSource audioSource;
    public AudioClip failure;
    public AudioClip allReady;

    public Image allPlayersLoadedTick;

    public Image allBotsLoadedTick;

    int maxBots = 1000;

    bool ready = false;

    public Button launchButton;

    void CloseAllPanels()
    {
        foreach(GameObject panel in panel_gameobjects)
        {
            panel.SetActive(false);
        }
    }
    public void SetMaxBots(int set_max)
    {
        maxBots = set_max;
    }

    public void Click_LaunchSessionButton()
    {
        // send a message to each trader bot that the game is now active
        FindObjectOfType<TraderBotManager>().SetAllTraderBotsActiveCommand(true);

        


        // rpcs to change view
        GetComponent<PhotonView>().RPC(nameof(ShowApprproateGameWindow), RpcTarget.All);

        // set up BSE (master client)
        FindObjectOfType<BSE>().MarketSession();
    }


    // and do a mobile build later

    [PunRPC]
    void ShowApprproateGameWindow()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            ShowAdminGamePanel();
        }
        else
        {
            ShowClientGamePanel();
        }
    }
   


    public void UpdateLoadedBots()
    {
        //currentBotsLoaded_text.text = n_loaded.ToString();

        // get the number of trader bots with setup = true
        int n_loaded = 0;
        TraderBot[] traderBots = FindObjectsOfType<TraderBot>();
        foreach(TraderBot traderBot in traderBots)
        {
            if (traderBot.setup) n_loaded++;
        }

        currentBotsLoaded_text.text = n_loaded.ToString();
        maxBots_text.text = "/ " + maxBots.ToString();

        if(n_loaded >= maxBots)
        {
            allBotsLoadedTick.enabled = true;
        }
        AllReadyCheck();
    }

    void AllReadyCheck()
    {
        if (!ready)
        {
            if(AreAllBotsLoaded() && AreAllPlayersLoaded())
            {
                ready = true;
                // play ready sfx and enable button
                launchButton.interactable = true;
                audioSource.PlayOneShot(allReady);
            }
        }
    }
    int last_n_connected = 0;
    int last_n_players_in_room = 0;

    public void UpdateConnectedPlayers(int n_connected, int n_players_in_room)
    {
        current_connected_players_text.text = n_connected.ToString();
        players_in_room_text.text = " / " + n_players_in_room.ToString();

        if(n_connected >= n_players_in_room)
        {
            allPlayersLoadedTick.enabled = true;
        }
        last_n_connected = n_connected;
        last_n_players_in_room = n_players_in_room;
        AllReadyCheck();
    }

    bool AreAllPlayersLoaded()
    {
        if(last_n_connected >= last_n_players_in_room)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool AreAllBotsLoaded()
    {
        int n_loaded = 0;
        TraderBot[] traderBots = FindObjectsOfType<TraderBot>();
        foreach (TraderBot traderBot in traderBots)
        {
            if (traderBot.setup) n_loaded++;
        }
        if(n_loaded >= maxBots)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public void ShowAdminGamePanel()
    {
        CloseAllPanels();
        adminGamePanel.SetActive(true);
    }
    public void ShowClientGamePanel()
    {
        CloseAllPanels();
        clientGamePanel.SetActive(true);
    }

    public void ShowAdminStartPanel()
    {
        CloseAllPanels();
        adminStartPanel.SetActive(true);
    }

    public void ShowClientStartPanel()
    {
        CloseAllPanels ();
        clientStartPanel.SetActive(true);
    }

    public void ShowEmptyPanel()
    {
        CloseAllPanels();
        emptyPanel.SetActive(true);
    }

    public void Click_InstantiateBotsButton()
    {
        SetButtonSetActive(false);

        Debug.Log("Launch bots click");


        // read session manager for bot data and send the signal to instantiate each bot (one by one for now)
        if (!botInstantiationCoroutineRunning && !AreAllBotsLoaded())
        {
            StartCoroutine(nameof(InstantiateBotsWhenConnected));
        }
        else if(botInstantiationCoroutineRunning)
        {
            audioSource.PlayOneShot(failure, 0.5f);
            output.text = "The bot instantiation coroutine is currently running";
        }
        else if (AreAllBotsLoaded())
        {
            audioSource.PlayOneShot(failure, 0.5f);
            output.text = "All bots are already loaded";
        }
    }

    bool botInstantiationCoroutineRunning = false;

    IEnumerator InstantiateBotsWhenConnected()
    {
        SetBotInstantiationCoroutineRunningFlag(true);
        Debug.Log("InstantiateBotsWhenConnected");
        while (!connectedToSocket)
        {
            yield return new WaitForEndOfFrame();
        }
        FindObjectOfType<AuctionSessionManager>().InstantiateBots();
        
    }

    public void SetBotInstantiationCoroutineRunningFlag(bool set)
    {
        botInstantiationCoroutineRunning = set;
    }




    // Start is called before the first frame update
    void Start()
    {
        
    }

    bool buttonSetActive = false;

    public void SetButtonSetActive(bool set)
    {
        buttonSetActive = set;
    }

    void Update()
    {

      //  instantiateBotsButton.gameObject.SetActive(buttonSetActive);
    }
}

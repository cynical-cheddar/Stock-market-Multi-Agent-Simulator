using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.SceneManagement;


public class AuctionSessionManager : MonoBehaviourPunCallbacks, IPunObservable
{
    public AdminUIManager adminUIManager;
    public AuctionMenuManager menuManager;
    int loadedPlayers = 0;

    int loadedBots = 0;
    int maxBots = 0;

    public AudioSource audioSource;
    public AudioClip createTrader;
    public AudioClip confirmTrader;
    [Header("Prefab should only be in resources")]
    public GameObject humanTraderInterfacePrefab;

    GameObject my_HumanTraderInterfaceGameObject;


    public ClientUIManager clientUIManager_mobile;
    public ClientUIManager clientUIManager_desktop;

    ClientUIManager clientUIManager;


class TimeAndClose
    {
        public float currentTime;
        public float closeTime;
    }
    // Start is called before the first frame update
    private void OnLevelWasLoaded(int level)
    {
        Debug.Log("OnLevelWasLoaded");
        if (FindObjectOfType<PersistentSettings>().mobileClient)
        {
            clientUIManager = clientUIManager_mobile;
        }
        else
        {
            clientUIManager = clientUIManager_desktop;
        }
        if (PhotonNetwork.IsMasterClient)
        {
            menuManager.ShowAdminStartPanel();
            GetComponent<PhotonView>().RPC(nameof(RPC_PlayerLoadedLevel), RpcTarget.AllBufferedViaServer);

            // get the number of bots to launch
            SessionSettings sessionSettings = FindObjectOfType<SessionSettings>();
            int n = 0;
            foreach (BotSchema bs in sessionSettings.botSettings.botSchemas)
            {
                n += bs.botQuantity;
            }
            maxBots = n;
            menuManager.SetMaxBots(maxBots);
            menuManager.UpdateLoadedBots();
        }
        else
        {
            menuManager.ShowClientStartPanel();

            // send an RPC to master informing of our loading
            GetComponent<PhotonView>().RPC(nameof(RPC_PlayerLoadedLevel), RpcTarget.AllBufferedViaServer);

            // create a human trader interface
            // this trader interface will, in turn, request the instantiation of a human trader, then listen for an RPC which will assign it a tid

            // photonnetwork.instantiate human trader interface
            my_HumanTraderInterfaceGameObject = PhotonNetwork.Instantiate(humanTraderInterfacePrefab.name, Vector3.zero, Quaternion.identity);

            
        }
    }

    [PunRPC]
    public void CreateHumanTrader()
    {

    } 


    bool buttonSetActive = false;
    public void BotServerConnected()
    {
        // menu manager enable bot button
        
        buttonSetActive = true;
    }

    public void InstantiateBots()
    {
        StartCoroutine(nameof(InstantiateBotsCoroutine));
        
    }


    bool proceedBotLoad = false;
    public void BotLoaded()
    {
        proceedBotLoad = true;
    }


    // TIME CONTROL
    // Set by master client's BSE
    public float synchronised_current_time = 0.0f;
    float last_synchronised_current_time = 0.0f;

    public float synchronised_closeTime = 999999f;

    // manage session timings 

    bool market_closed = false;





    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if(clientUIManager == null)
        {
            if (FindObjectOfType<PersistentSettings>().mobileClient)
            {
                clientUIManager = clientUIManager_mobile;
            }
            else
            {
                clientUIManager = clientUIManager_desktop;
            }
        }
        if (stream.IsWriting && PhotonNetwork.IsMasterClient)
        {
            if (Mathf.Abs(synchronised_current_time - last_synchronised_current_time) > 1)
            {
                last_synchronised_current_time = synchronised_current_time;
                TimeAndClose timeAndClose = new TimeAndClose();
                timeAndClose.currentTime = synchronised_current_time;
                timeAndClose.closeTime = synchronised_closeTime;
                stream.SendNext(JsonUtility.ToJson(timeAndClose));

                if (!market_closed)
                {
                    if(timeAndClose.currentTime >= timeAndClose.closeTime)
                    {
                        market_closed = true;
                        adminUIManager.CloseMarket();
                    }
                }
            }

            // synchronise the current time and market close time
        }

        else if (stream.IsReading && !PhotonNetwork.IsMasterClient)
        {
            string rec_json = (string)stream.ReceiveNext();
            TimeAndClose timeAndClose = JsonUtility.FromJson<TimeAndClose>(rec_json);
            synchronised_current_time = timeAndClose.currentTime;
            synchronised_closeTime = timeAndClose.closeTime;
            // alert the trader interfaces
            if(clientUIManager!=null) clientUIManager.SetCurrentTime(synchronised_current_time, synchronised_closeTime);


            if (!market_closed)
            {
                if (timeAndClose.currentTime >= timeAndClose.closeTime)
                {
                    market_closed = true;
                    clientUIManager.CloseMarket();
                }
            }



        }
    }


    IEnumerator InstantiateBotsCoroutine()
    {
        TraderBotManager traderBotManager = FindObjectOfType<TraderBotManager>();
        SessionSettings sessionSettings = FindObjectOfType<SessionSettings>();
        BotSettings botSettings = sessionSettings.botSettings;
        foreach (BotSchema botSchema in botSettings.botSchemas)
        {
            string botName = botSchema.botName;
            for (int i = 0; i < botSchema.botQuantity; i++)
            {
                traderBotManager.CreateTraderBot(botName);
                audioSource.PlayOneShot(createTrader);
                // wait for acknowledgement
                while (!proceedBotLoad)
                {
                    yield return new WaitForEndOfFrame();
                    
                }

                audioSource.PlayOneShot(confirmTrader);
                yield return new WaitForSeconds(confirmTrader.length);
                proceedBotLoad = false;

            }
        }
        menuManager.SetBotInstantiationCoroutineRunningFlag(false);
        yield return null;
    }

    [PunRPC]
    void RPC_PlayerLoadedLevel()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            loadedPlayers += 1;
            Debug.Log("Player loaded");
            menuManager.UpdateConnectedPlayers(loadedPlayers, PhotonNetwork.CurrentRoom.PlayerCount);
        }
    }


    public void HostLeave()
    {
        GetComponent<PhotonView>().RPC(nameof(AllLeaveRPC), RpcTarget.All);
    }

    [PunRPC]
    void AllLeaveRPC()
    {
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LeaveLobby();
        PhotonNetwork.Disconnect();
        Debug.Log("HOST QUIT");
        StartCoroutine(nameof(EnsureLeave));
    }


    IEnumerator EnsureLeave()
    {
        Debug.Log("ensure leave start");
        yield return new WaitForSeconds(2);
        SceneManager.LoadScene(FindObjectOfType<ClientQuitMenu>().returnScene);
        Debug.Log("should have left");
        yield return null;
    }

    // Update is called once per frame
    void Start()
    {

    }
    bool found = false;
    void Update()
    {
        if (!found && PhotonNetwork.IsMasterClient)
        {
            if (FindObjectOfType<SessionSettings>() != null)
            {
                synchronised_closeTime = FindObjectOfType<SessionSettings>().gameSettings.running_time;
                found = true;
            }

        }
    }
}

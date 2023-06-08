using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;


public class AuctionSessionManager : MonoBehaviour
{

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

    // Start is called before the first frame update
    private void OnLevelWasLoaded(int level)
    {
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

    // Update is called once per frame

}

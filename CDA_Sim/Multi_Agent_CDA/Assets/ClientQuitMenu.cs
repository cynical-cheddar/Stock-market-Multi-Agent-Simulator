using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.SceneManagement;
public class ClientQuitMenu : MonoBehaviourPunCallbacks
{
    // if a player decides to quit, then we must transfer ownership of our humanTraderInterface to the master client, then leave the game safely

    ClientUIManager clientUIManager;

    HumanTraderInterface myHumanTraderInterface;

    public string returnScene = "";


    public ClientUIManager clientUIManager_mobile;
    public ClientUIManager clientUIManager_desktop;



private void Start()
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


    protected void OnMasterClientSwitched()
    {
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LeaveLobby();
        PhotonNetwork.Disconnect();
        StartCoroutine(nameof(EnsureLeave));
    }



    void TransferInterfacePhotonView()
    {
       // myHumanTraderInterface = clientUIManager.GetMyHumanTraderInterface();
       // myHumanTraderInterface.GetComponent<PhotonView>().TransferOwnership(PhotonNetwork.MasterClient);
    }

    IEnumerator EnsureLeave()
    {
        Debug.Log("ensure leave start");
        yield return new WaitForSeconds(2);
        SceneManager.LoadScene(returnScene);
        Debug.Log("should have left");
        yield return null;
    }

    public void AbandonGame()
    {
        Debug.Log("Abandoning game");
        if (PhotonNetwork.IsMasterClient)
        {
            FindObjectOfType<AuctionSessionManager>().HostLeave();
        }
        TransferInterfacePhotonView();
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LeaveLobby();
        PhotonNetwork.Disconnect();
        StartCoroutine(nameof(EnsureLeave));
    }

    public void AbandonGameMasterClient()
    {
        Debug.Log("Abandoning game");

        TransferInterfacePhotonView();
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LeaveLobby();
        PhotonNetwork.Disconnect();
        StartCoroutine(nameof(EnsureLeave));
    }






    public void HostQuit()
    {
        Debug.Log("Host quit game");
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LeaveLobby();
        PhotonNetwork.Disconnect();
        StartCoroutine(nameof(EnsureLeave));
    }

    public void QuitProgram()
    {
        TransferInterfacePhotonView();
        //PhotonNetwork.LeaveRoom();
        PhotonNetwork.Disconnect();
        Application.Quit();
    }
}

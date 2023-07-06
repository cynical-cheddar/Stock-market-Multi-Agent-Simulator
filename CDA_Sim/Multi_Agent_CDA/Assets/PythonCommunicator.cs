using System;
using UnityEngine;

using System.Collections;
using System.Text;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using System.Collections.Generic;
using AsyncIO;
using Photon.Pun;

public class PythonCommunicator : MonoBehaviour
{

    [HideInInspector] public bool isTxStarted = false;

    [SerializeField] string IP = "127.0.0.1"; // local host
    [SerializeField] int rxPort = 8000; // port to receive data from Python on
    [SerializeField] int txPort = 8001; // port to send data to Python on

    int i = 0; // DELETE THIS: Added to show sending data from Unity to Python via UDP

    // Create necessary UdpClient objects
    UdpClient client;
    IPEndPoint remoteEndPoint;
    Thread receiveThread; // Receiving Thread



    PythonCommunicatorInterface pythonCommunicatorInterface;

    Queue<string> messages = new Queue<string>();
    Queue<string> out_messages = new Queue<string>();
 

    public void SendData(string message) // Use to send data to Python
    {

        out_messages.Enqueue(message);
        
    }

    void SendDataViaSocket(string message)
    {
        try
        {
            Debug.Log("sending: " + message);
            byte[] data = Encoding.UTF8.GetBytes(message);
            client.Send(data, data.Length, remoteEndPoint);
        }
        catch (Exception err)
        {
            print(err.ToString());
        }
    }

    IEnumerator Out_Message_Spooler()
    {
        while (true)
        {
            if(out_messages.Count > 0)
            {
                string msg = out_messages.Dequeue();
                SendDataViaSocket(msg);
                yield return new WaitForEndOfFrame();
            }
            yield return new WaitForEndOfFrame();
        }
    }

    void Awake()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            // Create remote endpoint (to python) 
            remoteEndPoint = new IPEndPoint(IPAddress.Parse(IP), txPort);

            // Create local client
            client = new UdpClient(rxPort);

            // local endpoint define (where messages are received)
            // Create a new thread for reception of incoming messages
            receiveThread = new Thread(new ThreadStart(ReceiveData));
            receiveThread.IsBackground = true;
            receiveThread.Start();

            // Initialize (seen in comments window)
            Debug.Log("UDP Comms Initialised");



            pythonCommunicatorInterface = FindObjectOfType<PythonCommunicatorInterface>();

            StartCoroutine(nameof(Out_Message_Spooler));
        }
       
    }

    


    void AddIncomingMessageToQueue(string msg)
    {
        messages.Enqueue(msg);
        
    }

    private void Update()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            if (messages.Count > 0)
            {
                //pythonCommunicatorInterface.HandleIncomingMessage(msg);
                string msg = messages.Dequeue();
                pythonCommunicatorInterface.HandleIncomingMessage(msg);
            }
        }
    }



    // Receive data, update packets received
    private void ReceiveData()
    {
        while (true)
        {
                IPEndPoint anyIP = new IPEndPoint(IPAddress.Any, 0);
                byte[] data = client.Receive(ref anyIP);
                string text = Encoding.UTF8.GetString(data);
                
                ProcessInput(text);
                AddIncomingMessageToQueue(text);
            }
        }
    

    private void ProcessInput(string input)
    {
        // PROCESS INPUT RECEIVED STRING HERE

        if (!isTxStarted) // First data arrived so tx started
        {
            isTxStarted = true;
        }
    }

    //Prevent crashes - close clients and threads properly!
    void OnDisable()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            if (receiveThread != null)
                receiveThread.Abort();

            client.Close();
        }
    }
}
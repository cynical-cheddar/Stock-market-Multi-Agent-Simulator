using System;
using System.Net.Sockets;
using UnityEngine;

public class PythonCommunicator : MonoBehaviour
{
    TcpClient client;
    NetworkStream stream;
    int i = 0;
    void Start()
    {
        client = new TcpClient("127.0.0.1", 8000); // Use the desired IP Address and Port number
        stream = client.GetStream();

        
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            SendMessageToPython("Hello,Python." + i.ToString());
            i++;
        }
    }

    void SendMessageToPython(string message)
    {
        if (client.Connected)
        {
            Byte[] data = System.Text.Encoding.ASCII.GetBytes(message);
            stream.Write(data, 0, data.Length);
            Debug.Log("Sent: " + message);

            data = new Byte[256];
            String responseData = String.Empty;
            Int32 bytes = stream.Read(data, 0, data.Length);
            responseData = System.Text.Encoding.ASCII.GetString(data, 0, bytes);
            Debug.Log("Received: " + responseData);
        }
    }

    void OnDestroy()
    {
        stream.Close();
        client.Close();
    }
}
import socket
import time
import os
from _thread import *
from TraderManager import TraderManager
from multiprocessing.connection import Listener
import zmq
import UdpComms as U
import time
import json
import enum
import Traders.CommunicationClasses as comms


    



# ============ INCOMING ==============

def HandleIncomingCommand(msg_dict):
    commandType = msg_dict['commandType']
    if(commandType == comms.CommandType.LaunchTrader):
        traderManager.LaunchTrader(json.loads(msg_dict['data']))
        print(traderManager.ListTraderInterfaces())

def HandleIncomingData(msg_dict):
    dataType = msg_dict['dataType']
    target_pid = str(msg_dict['target_pid'])
    if(dataType == comms.DataType.LimitOrderBook):
        # send LOB to target_pid
        forward_lob = target_pid + '@' + json.dumps(msg_dict)
        server_socket_pub.send_string(forward_lob)
        print("LOB incoming")

def HandleIncomingAcknowledgement(msg_dict):
    # route acknowledgement to correct trader
    target_pid = str(msg_dict['target_pid'])
    acknowledgement_message = target_pid + "@" + json.dumps(msg_dict)
    server_socket_pub.send_string(acknowledgement_message)

    

# ============ OUTGOING ==============


def HandleIncomingMessage(message):

    msg_dict = json.loads(message)
    if(msg_dict['messageType'] == comms.MessageType.Command):
        HandleIncomingCommand(msg_dict)
    elif(msg_dict['messageType'] == comms.MessageType.Data):
        HandleIncomingData(msg_dict)
    elif(msg_dict['messageType'] == comms.MessageType.Acknowledgement):
        print("acknowledgement recieved   " + message)
        HandleIncomingAcknowledgement(msg_dict)
    

def GetSourceFromMessage(message):
    msg_dict = json.loads(message)
    source = msg_dict['source_pid']
    return int(source)







#create the trading manager
traderManager = TraderManager()





#""" Socket for communicating with Unity """
unity_socket = U.UdpComms(udpIP="127.0.0.1", portTX=8000, portRX=8001, enableRX=True, suppressWarnings=True)
print("1")

#""" Trader bot socket """
server_context = zmq.Context()
print("2")
server_socket_pub = server_context.socket(zmq.PUB)
print("3")
server_socket_pub.bind("tcp://*:5555")
print("4")
server_socket_sub = server_context.socket(zmq.SUB)
print("5")
server_socket_sub.bind("tcp://*:5556")
print("6")
server_socket_sub.subscribe('0')
#server_socket_sub.subscribe("")




poller = zmq.Poller()
print("7")
poller.register(server_socket_sub, zmq.POLLIN)
print("8")
i = 0
while True:

    # ========= TRADERS =============
    #  Wait for next request from client
    socks = dict(poller.poll(timeout=0.01))
    if(server_socket_sub in socks and socks[server_socket_sub] == zmq.POLLIN):
        message_whole = server_socket_sub.recv_string()
        topic, message = message_whole.split("@")
        print(f"Trader socket rec request: {message_whole}")
        
        #  Send reply back to client
        #server_socket_pub.send_string(str (topic) + "@" + "ACKNOWLEDGE: " + message)
        
        unity_socket.SendData(message) # Send this string to other application
    else:
        pass




    
    # ========= UNITY =============
    message = unity_socket.ReadReceivedData() # read data

    if message != None: # if NEW data has been received since last ReadReceivedData function call
        
        HandleIncomingMessage(message)



    #data = connection.recv(4096)
    #if data:
    #    print("Received:", data.decode('utf-8'))
    #    response = "Message received by server"
    #    connection.sendall(response.encode('utf-8'))

while True:
    data = connection.recv(4096)
    if data:
        print("Received:", data.decode('utf-8'))
        response = "Message received by server"
        connection.sendall(response.encode('utf-8'))
    else:
        break


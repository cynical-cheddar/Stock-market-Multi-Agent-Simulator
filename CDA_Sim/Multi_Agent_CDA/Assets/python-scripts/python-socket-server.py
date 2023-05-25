import socket
import time
import os
from _thread import *
from Traders.Trader import Trader
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

    if(dataType == comms.DataType.LimitOrderBook):
        print("LOB incoming")


# ============ OUTGOING ==============


def HandleIncomingMessage(message):

    msg_dict = json.loads(message)
    if(msg_dict['messageType'] == comms.MessageType.Command):
        HandleIncomingCommand(msg_dict)
    elif(msg_dict['messageType'] == comms.MessageType.Data):
        pass
    
    
    







#create the trading manager
traderManager = TraderManager()





#""" Socket for communicating with Unity """
sock = U.UdpComms(udpIP="127.0.0.1", portTX=8000, portRX=8001, enableRX=True, suppressWarnings=True)


#""" Trader bot socket """
trader_context = zmq.Context()
trader_socket = trader_context.socket(zmq.REP)
trader_socket.bind("tcp://*:5555")


i = 0
while True:

    # ========= TRADERS =============
    #  Wait for next request from client
    if(trader_socket.poll(timeout=1)):
        message = trader_socket.recv()
        print(f"Trader socket rec request: {message}")
        #  Send reply back to client
        trader_socket.send(b"World T")
        
        sock.SendData(message.decode('utf-8')) # Send this string to other application
    else:
        pass




    
    # ========= UNITY =============
    message = sock.ReadReceivedData() # read data

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


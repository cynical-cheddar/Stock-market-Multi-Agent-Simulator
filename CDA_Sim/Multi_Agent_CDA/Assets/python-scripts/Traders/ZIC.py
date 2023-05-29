import sys
import multiprocessing
import subprocess
import os
import socket
import time
import importlib
import json
import zmq
debug = True
import CommunicationClasses as comms
import MessageConstants as msg_consts
import Trader
from Trader import Trader










    
"boot up and read arguments"
"arguments should include pid and name"
args = []
for i in range(1, len(sys.argv)):
    if(debug): print('argument:', i, 'value:', sys.argv[i])
    args.append(sys.argv[i])
pid = args[0]
name = args[1]



# Instantiate Trader
trader = Trader(pid, name)
# inform the Unity manager that we have set up sucessfully
if(trader.SetupTrader_Blocking(True) == False):
    print("trader setup error, trying again")
    if(trader.SetupTrader_Blocking(True) == False):
        print("trader setup error twice")
else:
    pass





print("====================================================")
print("setup completely done")
print("My PID is: " + str(trader.pid))
print("Trader type: " + trader.trader_name)
input()




# trader control loop
while (True):
    if(trader.socket_sub.poll(timeout=0.2)):
        #  Get the reply.
        message = trader.socket_sub.recv_string()
        topic, actual_message = message.split("@")
        msg_dict = json.loads(actual_message)
        print("recieved:" + actual_message)
    else:
        pass








"now wait in a loop, reacting to the limit order book"
"for now, we are just pinging"
while (True):
    data = client_socket.recv(4096)
    if(data):
        #response = "Message rec by trader" + data.decode('utf-8') + " " + str(i)
        #client_socket.sendall(response.encode('utf-8'))
        #i += 1
        pass
    else:
        pass
        #time.sleep(1)
        #client_socket.sendall(("ping" +  str(i))).encode('utf-8')
        #i+=1

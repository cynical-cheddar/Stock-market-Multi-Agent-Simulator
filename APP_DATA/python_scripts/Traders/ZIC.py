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
from Trader import KeyboardThread

# TEST FUNCTION CONSOLE
def keyboard_callback(inp):
    global trader
    #evaluate the keyboard input
    print(">>> ", inp)

    inp_split = inp.split()
    if(inp_split[0] == 'LOB'):
        trader.RequestLOB()
    elif(inp_split[0] == "BID"):
        if(len(inp_split) == 3):
            try:
                quantity = int(inp_split[1])
                unit_price = int(inp_split[2])
                trader.PlaceBuyOrder(quantity=quantity, unit_price=unit_price)
                pass
            except:
                print("bid format error")
        else:
            print("bid length format error")

    elif(inp_split[0] == "ASK"):
        if(len(inp_split) > 2):
            try:
                quantity = int(inp_split[1])
                unit_price = int(inp_split[2])
                trader.PlaceSellOrder(quantity=quantity, unit_price=unit_price)
                pass
            except:
                print("ask format error")
        pass

    else:
        print("command not recognised")








    
"boot up and read arguments"
"arguments should include pid and name and trader id "
args = []
for i in range(1, len(sys.argv)):
    if(debug): print('argument:', i, 'value:', sys.argv[i])
    args.append(sys.argv[i])
pid = args[0]
name = args[1]
tid = args[2]


# Instantiate Trader
trader = Trader(pid, name, tid)
# inform the Unity manager that we have set up sucessfully
if(trader.SetupTrader_Blocking(True, 5) == False):
    print("trader setup error, trying again")
    if(trader.SetupTrader_Blocking(True, 5) == False):
        print("trader setup error twice")
        quit()
else:
    pass





print("====================================================")
print("setup completely done")
print("My PID is: " + str(trader.pid))
print("My TID is: " + str(trader.tid))
print("Trader type: " + trader.trader_name)



import msvcrt


## ================================== ZIC LOGIC ======================================= ##



input_thread = KeyboardThread(keyboard_callback)


while (True):
    trader.PollForMessages()
    
    #last_message_type = trader.PollForMessages()
    #if(last_message_type != comms.MessageType.No_message):
    #    pass
        #print(" message recieved:    pid " + str(trader.pid) + " tid: " +  str(trader.tid) + " messageType: " +  str(last_message_type))

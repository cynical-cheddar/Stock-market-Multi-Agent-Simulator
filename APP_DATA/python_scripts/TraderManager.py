import multiprocessing
from subprocess import PIPE, Popen
import subprocess
import os
from os import listdir
from os.path import isfile, join
import socket
import time

from inspect import getsourcefile

import os.path as path, sys



windows_debug = True








localhost_ip = "127.0.0.1"


def GetTradersDirPath():
    if(os.name == "nt"):
        tradersPath = os.getcwd() + "\Traders"
    else:
        tradersPath = os.getcwd() + "/Traders"

    return tradersPath

def GetTraderScriptPath(scriptName):
    dirPath = GetTradersDirPath()
    if(os.name == "nt"):
        scriptPath = dirPath + "\\" + scriptName
    else:
        scriptPath = dirPath + "/" + scriptName

    return scriptPath



class Trader():
    def __init__(self, pid, name, tid):
        self.pid = pid
        self.name = name
        self.tid = tid

        # initialise the trader in a separate python process - completely decoupling the logic
        traderScriptPath = GetTraderScriptPath(self.name)      
        runString = "python " + traderScriptPath + " " + str(pid) + " " + str(name[:-3]) + " " + str(tid) + " &"

        print("trader process runString: " + runString)
        #runString = 'r' + runString

        if(windows_debug):
            subprocess.Popen('start /wait ' + runString, shell=True)
            #os.system('cmd /k ' + runString)
            #runString = traderScriptPath + " " + str(pid) + " " + str(name[:-3]) + " &"
            #os.startfile(runString)
        else:
            self.traderProcess = os.system(runString)
        
        print("done")
            

    
    def GetTraderDiagnosticInfo(self):
        pid_info = []
        pid_info.append("pid: " + str(self.pid))
        pid_info.append("name: " + str(self.name))
        return pid_info
    
    def Trader_IncomingMessage(self, message):
        pass

    def Trader_OutgoingMessage(self, message):
        pass






class TraderManager():
    def __init__(self):
        self.activeTraderInterfaces = []

        "load list of all possible trader names in /Traders"

        tradersPath = GetTradersDirPath()


        self.validTraders = [f for f in listdir(tradersPath) if isfile(join(tradersPath, f))]
        print(self.validTraders)



    def LaunchTrader(self, instantiationParameters):
        print("instantiation params " )
        print(instantiationParameters)
        traderName = instantiationParameters['scriptName']
        
        pid = instantiationParameters['instantiation_pid']
        tid = instantiationParameters['instantiation_tid']
        if(traderName in self.validTraders):
            newTrader = Trader(pid, traderName, tid)
            self.activeTraderInterfaces.append(newTrader)
            print("self.activeTraderInterfaces.append(newTrader)" )
        else:
            print("trader name " + traderName + " is not in directory '/Traders'")

    def ListTraderInterfaces(self):
        info = []
        for trader in self.activeTraderInterfaces:
            info.append(trader.GetTraderDiagnosticInfo())
        return info


    def IncomingMessage(self, message):
        pass

    def OutgoingMessage(self, message):
        pass


def ConnectToSocketServer():
    host = socket.gethostbyname('localhost')
    port = 8000

    client_socket = socket.socket()
    client_socket.connect((host, port))
    # we need to find out our client port number

    print("Trader manager connected to socket server")
    return client_socket









"""""
#now wait in a loop, reacting to the limit order book
#for now, we are just pinging
while (True):
    data = client_socket.recv(4096)
    if(data):
        msg = data.decode('utf-8')
        print("Trader Manager Recieved data: " + msg)
        # Parse data to decide on command
        if(msg == "1"):
            traderManager.LaunchTrader("ZIC.py")

        #client_socket.sendall(msg.encode('utf-8'))
"""



"test - create the trading manager"

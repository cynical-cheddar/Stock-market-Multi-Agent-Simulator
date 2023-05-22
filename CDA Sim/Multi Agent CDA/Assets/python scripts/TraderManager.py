import multiprocessing
from subprocess import PIPE, Popen
import subprocess
import os
from os import listdir
from os.path import isfile, join

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



class TraderInterface():
    def __init__(self, pid, name):
        self.pid = pid
        self.name = name

        "initialise the trader in a separate python process - completely decoupling the logic"


        traderScriptPath = GetTraderScriptPath(self.name)
        command = "python " + traderScriptPath + " " + str(pid) + " " + str(name[:-3]) 
        print("trader process instantiation command: " + command)
        self.traderProcess = subprocess.Popen(['python', traderScriptPath, str(pid), str(name[:-3])], start_new_session=True, stdin=PIPE, stderr=PIPE, stdout=PIPE, bufsize=3)
        msg_input = "Begin with id: " + str(self.pid)
        msg_input_bytes = bytearray()
        msg_input_bytes.extend(map(ord, msg_input))
        try:
            outs, errs = self.traderProcess.communicate(input=msg_input_bytes, timeout= 4)
            print(outs, errs)
        except:
            self.traderProcess.kill()
            print("no communication from: " + str(self.pid) + " : " + self.name)
            

    
    def GetTraderDiagnosticInfo(self):
        pid_info = []
        pid_info.append("pid: " + str(self.pid))
        pid_info.append("name: " + str(self.name))
        pid_info.append("process: " + str(self.traderProcess))
        return pid_info
    
    def Trader_IncomingMessage(self, message):
        pass

    def Trader_OutgoingMessage(self, message):
        pass






class TraderManager():
    def __init__(self):
        self.nextPid = 0
        self.activeTraderInterfaces = []

        "load list of all possible trader names in /Traders"

        tradersPath = GetTradersDirPath()


        self.validTraders = [f for f in listdir(tradersPath) if isfile(join(tradersPath, f))]
        print(self.validTraders)

    def LaunchTrader(self, traderName):
        if(traderName in self.validTraders):
            newTrader = TraderInterface(self.nextPid, traderName)
            self.activeTraderInterfaces.append(newTrader)
            self.nextPid += 1
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

        


    
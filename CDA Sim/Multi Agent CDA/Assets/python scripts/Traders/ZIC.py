import sys
import multiprocessing
from subprocess import PIPE, Popen
import subprocess
import os


debug = False

class ZIC():
    def __init__(self, id, name):
        self.id = id
        self.trader_name = name
        print(self.trader_name + " created with id: " + str(id))

    def id_check(self):
        return f"{self.id} is of type {self.trader_name}"
    

"boot up and read arguments"
"arguments should include pid and name (minimum of two args)"
args = []
for i in range(1, len(sys.argv)):
    if(debug): print('argument:', i, 'value:', sys.argv[i])
    args.append(sys.argv[i])

pid = args[0]
name = args[1]

trader = ZIC(pid, name)

"now wait in a loop, reacting to the limit order book"
while (True):
    pass


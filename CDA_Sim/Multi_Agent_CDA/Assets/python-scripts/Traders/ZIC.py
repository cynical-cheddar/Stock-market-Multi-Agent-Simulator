import sys
import multiprocessing
from subprocess import PIPE, Popen
import subprocess
import os
import socket
import time
import importlib
import json
import zmq
debug = True
import CommunicationClasses as comms














class ZIC():
    def __init__(self, pid, name):
        self.pid = pid
        self.trader_name = name
        self.setup = False
        self.active = False
        print(self.trader_name + " created with pid: " + str(self.pid))

    def id_check(self):
        return f"{self.id} is of type {self.trader_name}"
    
#class SocketClient():
#    def __init__(self, port):
#        self.ip = '127.0.0.1'
#        self.port = port
#        self.host = socket.gethostbyname('localhost')
#        self.client_socket = socket.socket()
#        self.client_socket.connect((self.host, self.port))
#        print("socketClient 1")


"boot up and read arguments"
"arguments should include pid and name"
args = []
for i in range(1, len(sys.argv)):
    if(debug): print('argument:', i, 'value:', sys.argv[i])
    args.append(sys.argv[i])
pid = args[0]
name = args[1]



# Instantiate Trader
trader = ZIC(pid, name)



i = 0
# Connect to socket server
context = zmq.Context()
print('going to create sub socket client')
socket_sub = context.socket(zmq.SUB)
socket_sub.connect("tcp://localhost:5555")
socket_sub.subscribe(pid)
print('sub client_socket_created')

print('going to create pub socket client')
socket_pub = context.socket(zmq.PUB)
socket_pub.connect("tcp://localhost:5556")
print('pub client_socket_created')

# inform the Unity manager that we have set up sucessfully
trader.setup = True
status_acknowledgement = comms.StatusAcknowledgement(trader.setup, trader.active).__dict__
setup_successful_message = json.dumps(comms.OutgoingRequestMessage(messageType= comms.MessageType.Request, pid=trader.pid, dataString=json.dumps(status_acknowledgement), requestType= comms.RequestType.ActiveStatus).__dict__)
setup_successful_message = (str(0) + "@" + setup_successful_message)
time.sleep(1)
socket_pub.send_string(setup_successful_message)
print(setup_successful_message)
# busywait for confirmation


while(True):

    
    if(socket_sub.poll(timeout=0.2)):
        #  Get the reply.
        message = socket_sub.recv_string()
        topic, actual_message = message.split("@")
        print(f"Received reply {topic} [ {actual_message} ]")
    else:
        pass
while (True):
    data = client_socket.client_socket.recv(4096)
    if(data):
        pass
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

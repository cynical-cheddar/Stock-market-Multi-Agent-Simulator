import socket
import time
import os

from Traders.Trader import Trader
from TraderManager import TraderManager


"test - create the trading manager"
traderManager = TraderManager()

traderManager.LaunchTrader("ZIC.py")
traderManager.LaunchTrader("ZIC.py")
time.sleep(1)
print(traderManager.ListTraderInterfaces())


input()

server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

server_address = ('localhost', 8000)  # Use the desired IP address and Port number
server_socket.bind(server_address)

server_socket.listen(1)

connection, client_address = server_socket.accept()

while True:
    data = connection.recv(1024)
    if data:
        print("Received:", data.decode('utf-8'))
        response = "Message received by server"
        connection.sendall(response.encode('utf-8'))
    else:
        break

connection.close()
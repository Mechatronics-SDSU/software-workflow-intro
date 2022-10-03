
import socket
'''
Establishing a bidirectional network communication link between a server-side and a client-side program.
'''
import logging
import random

logging.basicConfig(filename='test.log', level=logging.DEBUG, format='%(asctime)s')
'''
Added the '%(asctime)s' configuration to automatically log data with the date and time created
and established the basic log configuration to the debugging level for logged data to detect bugs
as a base.
'''
rannum = random.randrange(0, 100)

logging.debug(rannum)

s = socket.socket()
host = socket.gethostname()  # the host name of the socket created, my own computer
port = 8833  # naming the port for the receiver to be able to find the specific port by inputting said numbers
s.bind((host, port))  # binding the host to the port
s.listen(1)  # 'listening' for any devices that want to connect to the port

print(host)

print("Waiting for any incoming connections...")

conn, addr = s.accept()

print(addr, "Has connected to the server")

filename = input(str("Please enter the filename of the file:"))
file = open(filename, 'rb')  # we read to open the file and send it to the recipient
file_data = file.read(1024)
conn.send(file_data)  # sending the file to the connection established

print("Data has been transmitted successfully")

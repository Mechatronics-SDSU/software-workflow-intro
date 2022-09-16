import socket
import os
import sys

server_address = './uds_socket'
msg = 'Error connecting to socket'

print('\nConnecting... to {}'.format(server_address))

s = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM) 

try:
    s.connect(server_address)
except socket.error as msg:
    print(msg)
    sys.exit(1)

print("Press Ctrl-C to quit the client.")
print("Sending 'EXIT' shuts down the server and quits.")
print("-" * 30, "\n")

while True:
        try:
            x = input("> ")
            if "" != x:
                print("SEND:", x)
                s.send(x.encode('utf-8'))
                if "EXIT" == x:
                    print("Shutting down.")
                    break
                # Receives data back from server
                data = s.recv(1024)
                print("RECV:", data.decode('utf-8'),"\n")
        except KeyboardInterrupt as k:
            print("Shutting down.")
            s.close()
            break

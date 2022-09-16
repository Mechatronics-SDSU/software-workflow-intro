import socket
import os
import sys
import time

def slow_print(msg):
    for c in msg:
        print(c, end="", flush=True)
        time.sleep(0.1)
    print()

server_address = './uds_socket'

try:
    os.unlink(server_address)
except OSError:
    if os.path.exists(server_address):
        raise

# Opens a Unix Domain Socket
slow_print("\nOpening the UNIX Socket...")
s = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
s.bind(server_address)

# Listening for incoming connection from client
slow_print("Listening...")
s.listen(1)
print("-" * 30, "\n")

while True:
    # Waiting for connection to be established
    clt, adr = s.accept()
    try:
        print(f"Connection to {server_address} established")
        print("-" * 30, "\n")

        # Receive the data in small chunks and retransmit it
        while True:
            data = clt.recv(16)
            print('Received: {!r}'.format(data))
            if data:
                print('Sending data back to the client\n')
                clt.sendall(data)
            else:
                print('No more data from', clt)
                break
    finally:
        # Clean up the connection and closes the server
        print("Shutting down connection")
        clt.close()
        print("Finished\n")
        s.close()
    os.remove(server_address)
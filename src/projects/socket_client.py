import socket

HOST = '127.0.0.1'
PORT = 1080

# setting up socket and connecting to server
with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((HOST, PORT))
    s.sendall(b'Hello!')
    data = s.recv(1024)
    print('Received:', data.decode())

    while True:
        # infinite loop asking for input to send messages to the server
        message = input('Enter your message: ')
        s.sendall(str.encode(message))
        data = s.recv(1024)
        print('Received:', data.decode())

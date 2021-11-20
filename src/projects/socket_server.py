import socket

# we can specify the host address to e.g. only allow connections from the same machine
# we leave it empty here to allow connections from other machines as well
HOST = ''
PORT = 1080
message_count = 0

# setting up listening socket and waiting for connection
with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.bind((HOST, PORT))
    s.listen()
    conn, addr = s.accept()
    with conn:
        print('Connected by', addr)
        # infinite loop to keep server running
        while True:
            data = conn.recv(1024)
            message_count += 1
            print(data.decode() + " | Message " + str(message_count))
            conn.sendall(data)



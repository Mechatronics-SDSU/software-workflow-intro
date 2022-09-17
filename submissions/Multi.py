from random     import random
from time       import sleep
from multiprocessing import Process
from multiprocessing import Pipe
import logging

logging.basicConfig(filename="Multi.log",level = logging.INFO,
format='%(asctime)s:%(message)s')#basic config for where to log and format, will include time and date with each value
#generating 10 random values to send to receiving pipe
def sender(connection):
    print('Sender: Running')#indicates that sender is running
    for i in range(10):
        value = random()  #generating 10 random values with current date and time
        sleep(2)#buffer between each value being sent    
        connection.send(value)#sending each value
    connection.send(None)   #indicates that the last value has been sent and breaks the receiver's while loop
    print('Sender: Finished')#prints that sender has finished sending

def receiver(connection):#will receive and log the 10 random values
    print("Receiver: Running")#prints that the receiver is working
    while True:
        datapoint = connection.recv()#variable for information that is received
        logging.info(f">receiver got {datapoint}")#logs each value in 'Multi.log'
        if datapoint is None:#searches for None to break the while loop
            break
    print('Reciever: Finished')#indicates to programmer that receiver has finished receiving
#main process
if __name__ == '__main__':
    conn1, conn2 = Pipe()#initializing the pipes
    sender_process = Process(target = sender, args =(conn1,))#starting the sender process will use conn1 pipe
    sender_process.start()
    receiver_process = Process(target = receiver, args = (conn2,))#starting the receiving process which will use conn2
    receiver_process.start()
    sender_process.join()#makes sure that sender process is terminated
    receiver_process.join()#makes sure that the receiver process is terminated
    
        
    


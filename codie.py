import serial
import time

port = serial.Serial("COM5", baudrate=9600)
 
# reading and writing data from and to arduino serially.                                      
# rfcomm0 -> this could be different



while True:
    file = open("esempio.txt", "a")    
    print("DIGITAL LOGIC -- > SENDING...")
    rcv = port.readline()
    if rcv:
        print(rcv)
        rcv = str(rcv, 'utf-8')
        file.write(rcv)

    file.close()
    time.sleep( 3 )

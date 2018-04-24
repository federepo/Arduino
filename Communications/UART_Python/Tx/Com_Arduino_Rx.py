
import serial, time

com_arduino = serial.Serial('/dev/ttyACM0', 9600)

time.sleep(2)

i=1

while (i<2):
    dato_arduino = com_arduino.readline()
    print(dato_arduino)
   



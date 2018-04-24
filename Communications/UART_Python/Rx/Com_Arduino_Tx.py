
import serial, time

com_arduino = serial.Serial('/dev/ttyACM0', 9600)

time.sleep(2)

i=1
dato_arduino = 'H'

while (i<2):
    com_arduino.write(dato_arduino)
    print(dato_arduino)
   



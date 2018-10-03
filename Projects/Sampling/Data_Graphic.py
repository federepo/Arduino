# -*- coding: utf-8 -*-

# This example take data from temperature and pressure sensor and plot them

import serial 
import numpy  
import matplotlib.pyplot as plt 
from drawnow import *

temperature_LM35 = []      # List that contains the temperature         

com_arduino = serial.Serial('/dev/ttyUSB0', 9600) # Open USB port

plt.ion() #Tell matplotlib you want interactive mode to plot live data
cnt=0

def makeFig(): #Create a function that makes our desired plot
    plt.title('Sensor Data')      #Plot the title
    plt.grid(True)                                           #Turn the grid on
    plt.ylabel('Temperature C')                              #Set ylabels
    plt.plot(temperature_BMP280, 'ro-', label='Degrees C')   #plot the temperature BMP 280
    plt.plot(temperature_LM35, 'mh-', label='Degrees C')     #plot the temperature LM 35
    plt.legend(loc='upper left')                             #plot the legend
    plt2=plt.twinx()                                         #Create a second y axis
    plt2.plot(pressure_BMP280, 'b^-', label='Pressure (Pa)') #plot pressure data
    plt2.set_ylabel('Pressrue (Pa)')                         #label second y axis
    plt.ticklabel_format(useLocale = True)                   #Autoscale
    plt2.ticklabel_format(useLocale = True)                  #Autoscale
    plt2.legend(loc='upper right')                           #plot the legend
    

while True: 
    while (com_arduino.inWaiting()==0): #Wait here until there is data
        pass #do nothing
    arduinoString = com_arduino.readline() #read the line of text from the serial port
    dataArray = arduinoString.split(',')   #Split it into an array called dataArray
    print(dataArray)
    temp_LM35 = float(dataArray[0])              #Convert first element to floating number 
    temperature_LM35.append(temp_LM35)           #Build our temperature_LM35 array by appending temperatures readings 
    drawnow(makeFig)                             #Call drawnow to update our live graph
    plt.pause(.000001)                           #Pause Briefly. Important to keep drawnow from crashing
    cnt=cnt+1
    if(cnt>50):                            #If you have 50 or more points, delete the first one from the array
        temperature_LM35.pop(0)                       #This allows us to just see the last 50 data points
        temperature_BMP280.pop(0)      
        pressure_BMP280.pop(0)


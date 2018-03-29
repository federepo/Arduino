/*************************************************************************************
Programa Ejemplo: Este programa recibe el valor analógico del Master y prende 2 leds
                  El rango de LEDs es entre 0 y 35 
Arduino UNO
****************************************************************/

#include<SoftwareSerial.h>

SoftwareSerial mySerial(2,3); // se define al Pin2 como RX, Pin3 como TX

void setup()
{      

   Serial.begin(9600);        //inicializa la comunicacion serial  
   mySerial.begin(9600);
   
   pinMode(10,OUTPUT);       //se configura los pines 10 y 12 como salida   
   pinMode(12,OUTPUT);
  
}

void loop() 
{

        char c=mySerial.read();    //Se recibe el dato mediante Bluetooth
               
             
         if(c>=0 && c<=17){ 
           
        
           digitalWrite(7,HIGH);
           digitalWrite(9,LOW);
           digitalWrite(11,LOW);
           digitalWrite(12,LOW);
           digitalWrite(10,LOW);
         }
         
         if(c>=20 && c<=35){ 
           
           
           
           digitalWrite(7,HIGH);
           digitalWrite(9,HIGH);
           digitalWrite(11,LOW);
           digitalWrite(12,LOW);
           digitalWrite(10,LOW);
         }
               
}

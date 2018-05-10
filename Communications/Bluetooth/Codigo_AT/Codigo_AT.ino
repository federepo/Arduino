/********************************************************************
Programa Ejemplo: Este programa configura al módulo Bluetooth HC-05
Arduino UNO
*********************************************************************/

#include <SoftwareSerial.h>   // Se incluye la biblioteca SoftwareSerial para la comunicación con el Bluetooth  

SoftwareSerial AT_B(10,11);   // Se definen cuáles serán los pines de Rx y Tx
 
void setup()
{
  
  AT_B.begin(38400);       // Se inicializa la comunicación serie con el Bluetooth
  
  Serial.begin(38400);   // Se inicializa la comunicación serie con la PC (monitor serial)
  
}
 
void loop()
{
 
  if(AT_B.available())    // Espera información desde el Bluetooth
  {
    Serial.write(AT_B.read()); // Se escribe en el monitor, el caracter que se leyó
  }
 
  if(Serial.available())  // Se envía datos al Bluetooth si se envía desde el monitor
  {
     AT_B.write(Serial.read());
  }
}

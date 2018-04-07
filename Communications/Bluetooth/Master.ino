
/********************************************************************
Programa Ejemplo: Transmisión de datos analógicos mediante Bluetooth
Arduino UNO
********************************************************************/

#include <SoftwareSerial.h>

SoftwareSerial mySerial(2,3);// RX,TX

int pin_entrada= 0;
 
void setup()
{  
  Serial.begin(9600);       //Se inicializa la comunicación serie con 9600 baudios
  mySerial.begin(9600);
 
}
void loop()
{
  int referencia = analogRead(pin_entrada); //Toma el valor que tiene el sensor, como referencia
                                     
 
  mySerial.write(referencia);  //Transmito la referencia para que el receptor pueda hacer los cálculos                         
  
}

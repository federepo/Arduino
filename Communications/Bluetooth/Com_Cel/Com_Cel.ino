/********************************************************************
Programa Ejemplo: Transmisión de datos con celular. 
Arduino UNO
********************************************************************/

#include <SoftwareSerial.h>

SoftwareSerial BT(10,11); //10 RX, 11 TX.

int led_pin = 13; // Led de la placa Arduino
int temp = 0;    // 
 
void setup() {

    BT.begin(9600);

    pinMode(led_pin,OUTPUT);   // led del pin 13 como salida
    
    Serial.begin(9600);        // Se inicializa la comunicación serie
}
 
void loop() {
  
 
  
  if(BT.available()){    // Hay datos disponibles desde el bluetooth?
       temp = BT.read();    // Si hay datos, se guardan en la variable temp
 
  }  
 
  if (temp == '0') {           // Si el caracter recibido es "0", apagar el LED 13 de la placa
    
    digitalWrite(led_pin, LOW);
    
    Serial.println("LED: Apagado");
 }
 
 
  else                        // Si el caracter recibido es "1", encender el LED 13 de la placa

 if (temp == '1') {
     
     digitalWrite(led_pin, HIGH);
     
     Serial.println("LED: Encendido");
 }
 
}

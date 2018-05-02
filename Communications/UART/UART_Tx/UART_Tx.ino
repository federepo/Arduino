/**********************************************************************
 Ejemplo: Software serial 
          Arduino envía datos hacia el hardware o dispositivo externo a través del puerto serie
          (mySerial). Los datos enviados desde Arduino, se hace a través del puerto Serie nativo 
          (Sofwtare Serial).
          
          Señales:
          
          * Pin 10 es RX (conectar al TX del dispositivo a conectar)
          * Pin 11 es TX (conectar al RX del dispositivo a conectar)

Arduino: Arduino UNO          
***********************************************************************/         

#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {

  Serial.begin(9600); // Se inicializa la comunicación serie con la PC
 
  mySerial.begin(4800); // Se inicializa la comunicación serie a través del puerto SoftwareSerial
               
}

void loop() { 
  
  if (Serial.available()) {  // Obtiene el número de bytes disponibles desde el puerto serie (PC)
                             // Estos datos se almacenan en un buffer de 64 bytes
                    
    
    mySerial.write(Serial.read()); // Si hay datos, se los envía por el puerto serie
  }

  
  
}

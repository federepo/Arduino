/**********************************************************************
 Ejemplo: Software serial 
          Arduino recibe datos desde el hardware o dispositivo externo a través del puerto serie
          (mySerial), y los envía a través del puerto Serie nativo (Sofwtare Serial) hacia la PC.
          
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
  
  if (mySerial.available()) {  // mySerial.available():
                               // Get the number of bytes (characters) available for reading 
                               // from a software serial port. 
                               // Return the number of bytes available to read
    
    Serial.write(mySerial.read()); // mySerial.read: 
                                   // Return a character that was received on the RX pin 
                                   // of the software serial port. 
                                   // Return the character read, or -1 if none is available
    
  }
  
  
}

/*****************************************************************************************************
 Ejemplo: En base al código UART, se toman los datos provenientes del GPS: Blox Neo 6M 
           
          Datos GPS: NEO-6M: Tensión alimentación:2,7V - 3,6V
                             Comunicación: UART, USB, SPI, DDC. Se utilizará la UART  

          
          Señales en Arduino:
          
          * Pin 10 es RX (conectar al TX del dispositivo a utilizar)
          * Pin 11 es TX (conectar al RX del dispositivo a utilizar)

Arduino: Arduino UNO          
*******************************************************************************************************/         

#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {

  Serial.begin(9600); // Se inicializa la comunicación serie con la PC
 
  mySerial.begin(9600); // Se inicializa la comunicación serie a través del puerto SoftwareSerial
               
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

    


    delay(500);
  }
  
  
}

/******************************************************************************
Programa Ejemplo: Transmisión de datos desde Arduino hacia Celular. (Probarlo)
Arduino UNO
********************************************************************************/

#include <SoftwareSerial.h>

SoftwareSerial BT(10,11); //10 RX, 11 TX.

int temp = 0;    // 
 
void setup() {

    BT.begin(9600);            // Se inicializa la comunicación serie con el BT

    Serial.begin(9600);        // Se inicializa la comunicación serie con la PC
}
 
void loop() {
  
 if(Serial.available()){       // Se fija si hay datos disponibles en el puerto

     BT.write(Serial.read());  // Si los hay, los envía por el puerto serie donde está conectado el BTs

     Serial.write(Serial.read()); // Envío el dato a la PC, recibido por la PC, simplemente para chequear lo que envío
 }

  
}

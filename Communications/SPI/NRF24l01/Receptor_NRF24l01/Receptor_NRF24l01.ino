/********************************************************************************
 * Ejemplo: Se realiza la comunicación entre dos tranceptores NRF24l01. 
 *          Este código corresponde al receptor
 * Arduino: Arduino UNO         
 *********************************************************************************/
 
#include <RF24.h>
#include <printf.h>
#include <RF24_config.h>
#include <nRF24L01.h>

#define CE_PIN 9               // Pin Chip Enable
#define CS_PIN 10              // Pin Chip Select
#define ADRESS 0xF0F0F0F0F0    // 40-bit hex value
 
RF24 radio(CE_PIN, CS_PIN);  // Se crea el objeto radio

float *data = NULL;  // datos analógicos a tomar desde el receptor


void setup()
{
 
  radio.begin();                     // Se inicializa el NRF24L01 
  
  Serial.begin(9600);               // Se inicializa el puerto serie

  radio.openReadingPipe(1,ADRESS);    // Se abre un canal donde se recibirá la información.
                                     // El receptor deberá tener la misma dirección  
  radio.startListening();          // Se comienza a escuchar por el canal
 
}
 
void loop() {
  

 if ( radio.available()==true )  // Devuelve True si el payload está disponible
 {    
      radio.read(&data,sizeof(data));
     
     Serial.print("Dato recibido " );
     Serial.print(*data);
     
 }
 else
 {
     Serial.println("No llegaron datos");
 }
 delay(1000);
}

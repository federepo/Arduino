/********************************************************************************
 * Ejemplo: Se realiza la comunicación entre dos tranceptores NRF24l01. 
 *          Este código corresponde al transmisor
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
 
float *data = NULL;  // datos analógicos a tomar desde el sensor
bool envio = 0;      // envío de datos

void setup()
{
  
  radio.begin();                     // Se inicializa el NRF24L01 
  
  Serial.begin(9600);               // Se inicializa el puerto serie

  radio.openWritingPipe(ADRESS);    // Se abre un canal donde se transmitirá la información.
                                    // El receptor deberá tener la misma dirección  
 
}
 
void loop()
{ 
 
 *data=analogRead(0)* (5.0 / 1023.0); // Se toman datos analógicos
 
  
  envio = radio.write(data, sizeof(data));    // Se envían los datos.
                                             // Es importante haber abierto el canal con openWritingPipe()
                                             // Devuelve True si el payload se entregó satisfactoriamente

                                             
  if(envio==true)                        // Los datos enviados se muestran en el Monitor Serial
  {
     Serial.print("Se esta enviando el dato: "); 
     Serial.print(*data); 
     
  }
  else
  {
     Serial.println("No se envió ningun dato");
  }
  delay(500);
}

/**************************************************************************************
 * Este código toma los datos del sensor BMP280. 
 * Nota: Se utilizará el protocolo I2C. Previamente conviene hacer un scanner de los 
 *       dispositivos I2C conectados y ver su dirección. Para esto se puede usar el
 *       sketch scanner I2C. Luego, con la dirección encontrada, introducirla en
 *       sensor.begin(0X76).
 * Placa: Mini Wemos
 *********************************************************************************** */

#include <Wire.h>
#include <Adafruit_BMP280.h>

 
Adafruit_BMP280 sensor; 
 
void setup() {
  
Serial.begin(9600);
 
while (!sensor.begin(0x76)) { 

       Serial.println("No se encontró el sensor");
       
   }
}
 
void loop() {

 digitalWrite(D3,HIGH); 

 Serial.print("Temperatura: ");
  
 Serial.print(sensor.readTemperature());
 
 Serial.println(" °C");
 
 Serial.print("Presión: ");

 Serial.print(sensor.readPressure());

 Serial.println(" Pa");
 
 Serial.println();
 
 delay(1000);
}

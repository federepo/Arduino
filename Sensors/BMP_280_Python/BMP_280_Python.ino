/**************************************************************************************
 * Este código toma los datos del sensor BMP280. 
 * Nota: Se utilizará el protocolo I2C. Previamente conviene hacer un scanner de los 
 *       dispositivos I2C conectados y ver su dirección. Para esto se puede usar el
 *       sketch scanner I2C. Luego, con la dirección encontrada, introducirla en
 *       sensor.begin(0X76).
 * Placa: Arduino Nano
 *********************************************************************************** */

#include <Wire.h>
#include <Adafruit_BMP280.h>

#define led 13

float temperature;  // Variable for holding temp in C

float pressure; //Variable for holding pressure reading
 
Adafruit_BMP280 sensor; 
 
void setup() {

Serial.begin(9600);

while (!sensor.begin(0x76)) { 

       Serial.println("No se encontró el sensor");
           
   }
     
}
 
void loop() {

temperature = sensor.readTemperature(); //  Be sure to declare your variables

pressure=sensor.readPressure(); //Read Pressure

Serial.flush();
  
Serial.print(temperature);

Serial.print(" , ");

Serial.println(pressure);

delay(1500); //Pause between readings.

}

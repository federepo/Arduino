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

Adafruit_BMP280 sensor; 
 
void setup() {

Serial.begin(9600);

while (!sensor.begin(0x76)) { 

       Serial.println("No se encontró el sensor");
           
   }
     
}
 
void loop() {

  int analog_in = 0;
  unsigned char analog_pin = 1;

  float voltage = 0;
  float temperature_LM35 = 0;
  float temperature_BMP280 = 0;  // Variable for holding temp in C from BMP 280
  float pressure_BMP280 = 0;     //Variable for holding pressure reading

  
  analog_in = analogRead(analog_pin);    // Se lee el valor sensado por el LM35. 
                                        // Devuelve un entero entre 0 y 1023
 
  voltage  = (5 / 1023.0) * analog_in; // Se convierte el valor en °C a V
  
  temperature_LM35 = voltage / 0.01;       // Se convierte la tensión a grados celsius
  
  temperature_BMP280 = sensor.readTemperature(); //  Be sure to declare your variables

  pressure_BMP280 = sensor.readPressure(); //Read Pressure

Serial.flush();

Serial.print(temperature_LM35);  

Serial.print(" , ");

Serial.print(temperature_BMP280);

Serial.print(" , ");

Serial.println(pressure_BMP280);

delay(1500); //Pause between readings.

}

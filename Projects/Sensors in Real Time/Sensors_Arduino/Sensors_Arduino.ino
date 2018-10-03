/*******************************************************************************************
 * This code takes the data from the LM 35 and BMP280 sensors and sends them through 
 * the serial port. These values are strings separated by a comma
 * Note: The I2C protocol will be used. Previously, it is convenient to scan the 
 *       connected I2C devices and see their address. For this you can use the I2C sketch scanner. 
 *       Then, with the address found, enter it in sensor.begin (0X76).      
 * Board: Arduino Nano
 *******************************************************************************************/

#include <Wire.h>
#include <Adafruit_BMP280.h>

#define led 13

Adafruit_BMP280 sensor; 
 
void setup() {

Serial.begin(9600);

while (!sensor.begin(0x76)) { 

       Serial.println("The sensor was not found");
           
   }
     
}
 
void loop() {

  int analog_in = 0;
  unsigned char analog_pin = 1;

  float voltage = 0;
  float temperature_LM35 = 0;
  float temperature_BMP280 = 0;          // Variable for holding temp in C from BMP 280
  float pressure_BMP280 = 0;             //Variable for holding pressure reading

  
  analog_in = analogRead(analog_pin);    // The value sensed by the LM35 is read. 
                                        // Returns an integer between 0 and 1023
 
  voltage  = (5 / 1023.0) * analog_in;  // The value is converted in ° C to V
  
  temperature_LM35 = voltage / 0.01;    // The voltage is converted to degrees celsius
  
  temperature_BMP280 = sensor.readTemperature(); //  Read Temperature from BMP 280

  pressure_BMP280 = sensor.readPressure(); // Read Pressure from BMP 280

Serial.flush();                         // Clear bufffer before send data

Serial.print(temperature_LM35);   

Serial.print(" , ");

Serial.print(temperature_BMP280);

Serial.print(" , ");

Serial.println(pressure_BMP280);

delay(1500); //Pause between readings.

}

/******************************************** 
 * I2C for Arduino
/* Board I2C / TWI pins

Uno, Ethernet A4 (SDA), A5 (SCL)
Mega2560  20 (SDA), 21 (SCL)
Leonardo  2 (SDA), 3 (SCL)
Due 20 (SDA), 21 (SCL), SDA1, SCL1
********************************************/

#include <Wire.h>

void setup()
{
  Wire.begin(); // Initizializate I2C
}

byte data = 0xFF;

void loop()
{
  Wire.beginTransmission(0x27); // Adress
  Wire.write("x is ");        
  Wire.write(data);           // send data  
  Wire.endTransmission();    // stop transmitting
  
  delay(500);

  
}

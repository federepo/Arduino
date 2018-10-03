/*******************************************************************************************
 * This code takes the data from the LM 35 and BMP280 sensors and sends them through 
 * the serial port. These values are strings separated by a comma
 * Note: The Arduino board contains a 10-bit analog to digital converter. 
 *       This means that it will map input voltages between 0 and 5 volts 
 *       into integer values between 0 and 1023. This yields a resolution between readings of: 
 *       5 volts / 1024 units or, 0.0049 volts (4.9 mV) per unit.                
 *       It takes about 100 microseconds (0.0001 s) to read an analog input, 
 *       so the maximum reading rate is about 10,000 times a second.
 * Board: Arduino Nano
 *******************************************************************************************/

int analogPin = 3;     // Signal to analog pin 3
                      
                       
int val = 0;           // variable to store the value read

void setup()
{
  Serial.begin(9600);              //  Serial Communication
}

void loop()
{
  val = analogRead(analogPin);     // read the input pin
  Serial.println(val);             
}
  
 

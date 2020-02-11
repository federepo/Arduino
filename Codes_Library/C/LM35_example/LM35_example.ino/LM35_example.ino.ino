/* *****************************************************************
 * LM35 Library 
 * File: LM35.ino
 * VERSION: 1.0
 * Author: Federico Gabriel D'Angiolo
 * Description: This file contains skecth for LM 35 and Arduino
*******************************************************************/

#include "LM35.h"

void setup() {

Serial.begin(9600);

}

void loop() {

//Obtain and print temperature in Celsius
Serial.println("Temperature in Celsius  ");
Serial.println(cels());
delay(1000);


//Obtain and print temperature in Celsius
Serial.println("Temperature in Fahrenheit  ");
Serial.println(fahr());
delay(1000);


}

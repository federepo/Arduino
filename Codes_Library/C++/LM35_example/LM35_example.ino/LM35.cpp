/* *****************************************************************
 * LM35 Library 
 * File: LM35.cpp
 * VERSION: 1.0
 * Author: Federico Gabriel D'Angiolo
 * Description: This file contains all functions about LM35
*******************************************************************/

#include "Arduino.h"
#include "LM35.h"

LM35::LM35(uint8_t pin)
{
    pinMode(pin, OUTPUT);
    _pin = pin;
}

float LM35::cels()
{
    float tempC = (float(analogRead(_pin))*VREF_5/(ADC_R))/VpC;
    return tempC;
}

float LM35::fahr()
{
   float tempF = (((float(analogRead(_pin))*VREF_5/(ADC_R))/VpC)*1.8)+32;
   return tempF;
}

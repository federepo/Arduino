/* *****************************************************************
 * LM35 Library 
 * File: LM35.cpp
 * VERSION: 1.0
 * Author: Federico Gabriel D'Angiolo
 * Description: This file contains all functions about LM35
*******************************************************************/

#include "Arduino.h"
#include "Morse.h"

LM35::LM35()
{
}

float LM35::cels()
{
   return (float(analogRead(_pin))*5/(1023))/0.01;
}

float LM35::fah()
{
   return (((float(analogRead(_pin))*5/(1023))/0.01)*1.8)+32;
}



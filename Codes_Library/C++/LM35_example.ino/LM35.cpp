/* *****************************************************************
 * LM35 Library 
 * File: LM35.cpp
 * VERSION: 1.0
 * Author: Federico Gabriel D'Angiolo
 * Description: This file contains all functions about LM35
*******************************************************************/

#include "Arduino.h"
#include "LM35.h"

float LM35::cels()
{
    float tempC = (float(analogRead(A0))*5/(1023))/0.01;
    return tempC;
}

float LM35::fahr()
{
   float tempF = (((float(analogRead(A0))*5/(1023))/0.01)*1.8)+32;
   return tempF;
}

/* *****************************************************************
 * LM35 Library 
 * File: LM35.h
 * VERSION: 1.0
 * Author: Federico Gabriel D'Angiolo
 * Description: This file contains all definitions about LM35
*******************************************************************/

#ifndef LM35_h
#define LM35_h

#include "Arduino.h"

/***************************************************************************************************
                           Definition of Voltages
****************************************************************************************************/

//Reference voltage
#define VREF_5    5
#define VREF_3_3  3.3  

//Voltage /°C
#define VpC 0.01 

//ADC Resolution. 10bits
#define ADC_R 1023

/***************************************************************************************************
                           Definition of LM35 Class
****************************************************************************************************/

class LM35
{

  public:

      // constructor
      LM35(uint8_t pin);

      // return temperature in celsius
      float cels();  
 
      // return temperature in fahrenheit
      float fahr();

  private:
      int _pin;
               
};

#endif

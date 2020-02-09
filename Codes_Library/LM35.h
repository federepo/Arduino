/* *****************************************************************
 * LM35 Library 
 * File: LM35.H
 * VERSION: 1.0
 * Author: Federico Gabriel D'Angiolo
 * Description: This library contains all definitions about LM35
*******************************************************************/

#ifndef LM35_h
#define LM35_h

#include "Arduino.h"

class LM35{

  public:

      // constructor
      LM35(int pin);

      // define methods
      // return temperature in celsius
      float cels();   
      // return temperature in fahrenheit
      float fahr();     

  private:
      int _pin;

};

#endif


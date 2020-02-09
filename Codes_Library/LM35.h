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

class LM35
{

  public:

      // constructor
      LM35();

      // return temperature in celsius
      float cels();  
 
      // return temperature in fahrenheit
      float fahr();     
};

#endif


# LM35 Library

## Dcoumentation

- [Introduction](#Introd)
- [Usage](#usage)
- [Version](#Version)
 
### Introduction<a name = Introd></a>

This library works with LM35 sensor. 
Returns the temperature value in degrees Celcius and Kelvins

### Information<a name = usage></a>

## Usage
+ Include library file header
```cpp
#include <LM35.h>
```
+ Create an object wich parameter corressponds to the analag pin is connected to on the Arduino.
```cpp
LM35 my_sensor(A0);
```

+ In *loop()* function, use function:
```cpp
my_sensor.cels();
```
> This function returns the temperature in celsius

+ Temperature in Fahrenheit
```cpp
my_sensor.fahr();
```

> This function returns the temperature in Fahrenheit

### Version and date<a name = Version></a>

Driver files      | Version | Date
------------------|---------|------------
LM35.h            |  1.0    | 10 Feb 2020
LM35.cpp	  |  1.0    | 10 Feb 2020






/****************************************************************
Programa Ejemplo: Controlar sentido de Motor con L298
Arduino UNO.

Nota: Tabla de verdad que utiliza el L298:
  INPUTS         FUNCTION   
IN1    IN2        
HIGH   LOW       FORWARD
LOW    HIGH      REVERSE
LOW    LOW        STOP
****************************************************************/

int IN1 = 3; 
int IN2 = 4;

void setup()
{
  pinMode (IN1, OUTPUT);    // Pin 1 que controla al puente H 
  pinMode (IN2, OUTPUT);    // Pin 2 que controla al puente H
}

void loop()
{
   
  digitalWrite (IN1, HIGH);   // Motor gira en un determinado sentido
  digitalWrite (IN2, LOW); 
  
}

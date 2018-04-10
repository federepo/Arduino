//*******************************************
//Programa Ejemplo: Se envía el ancho de pulso que se necesita.
//                  Frecuencia de trabajo: 490Hz

//Arduino UNO
//******************************************

int ledPin = 7;      // LED connected to digital pin 7

int val = 0;         // 

void setup()
{
  pinMode(ledPin, OUTPUT);   // sets the pin as output
}

void loop()
{
  
  analogWrite(ledPin, val);  // analogRead values go from 0 to 1023, analogWrite values from 0 to 255

}


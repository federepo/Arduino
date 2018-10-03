//**************************************************************
//Program: This code send a PWM signal through analogWrite.
//         Frequency: 490Hz

//Board: Arduino UNO
//***************************************************************

int ledPin = 9;      // Motor connected to pin 9

int val = 0;         // Value to send like PWM signal

void setup()
{
  pinMode(ledPin, OUTPUT);   // pin 9 Like OUTPUT
  Serial.begin(9600);        // Begin Serial Comunication. 9600 bps
}

void loop()
{

  val = 55;                  // Value to send like PWM
   
  analogWrite(ledPin, val);  // Send a PWM signal

                             
  Serial.print("Actual Value:");
  Serial.println(val);
  
}


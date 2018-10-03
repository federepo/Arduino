/****************************************************************
Program: Blinky
Board: Arduino UNO
****************************************************************/

int Led_1 = 7;                // LED in pin 7

void setup() {

  pinMode(Led_1, OUTPUT);     // pin 7 like OUTPUT

}

void loop() {

  digitalWrite(Led_1, HIGH);   // LED ON
  
  delay(500);                  // delay 500 ms
  
  digitalWrite(Led_1, LOW);    // LED OFF
  
  delay(500);                  // delay 500ms
}

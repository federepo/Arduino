/****************************************************************
Programa Ejemplo: Blinky
Arduino UNO
****************************************************************/

int Led_1 = 7;   //En el pin 7 se conectará el LED 

void setup() {

  pinMode(Led_1, OUTPUT);     //Se configura al pin 7 como salida

}

void loop() {

  digitalWrite(Led_1, HIGH);   // Se enciende el LED
  
  delay(500);                       // demora de 600ms
  
  digitalWrite(Led_1, LOW);    // Se apaga el LED
  
  delay(500);                       // demora de 600ms
}

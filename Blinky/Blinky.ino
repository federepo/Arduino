/****************************************************************
Programa Ejemplo: Blinky
Arduino UNO
****************************************************************/

#define Led_1 13   //En el pin 13 se encuentra el LED rojo
#define Led_2 1    //En el pin 1 se encuentra el LED adicional

void setup() {

  pinMode(Led_1, OUTPUT);     //Se configuran ambos pines como salida
  pinMode(Led_2, OUTPUT);

}

void loop() {

  digitalWrite(Led_1, HIGH);   // Se enciende el LED
  digitalWrite(Led_2, HIGH);
  
  delay(600);                       // demora de 600ms
  
  digitalWrite(Led_1, LOW);    // Se apaga el LED
  digitalWrite(Led_1, LOW);
  
  delay(600);                       // demora de 600ms
}

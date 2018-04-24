/********************************************************************************
 * Ejemplo: Se realiza la comunicación entre Python y Arduino mediante la UART.
 *          Para lograr la comunicación, se usar Pyserial. 
 * Arduino: Arduino UNO         
 ********************************************************************************/

void setup() {
  
Serial.begin(9600); // Se inicializa la comunicación por UART

}
 
void loop() {
  
Serial.println("Hola"); // Se envía el dato a mostrar en Pantalla

delay(1000);

}



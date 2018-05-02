/********************************************************************
Programa Ejemplo: Transmisión de datos con celular. 
Arduino UNO
********************************************************************/

int led_pin = 13; // Led de la placa Arduino
int temp = 0;    // 
 
void setup() {

    pinMode(led_pin,OUTPUT);   // led del pin 13 como salida
    
    Serial.begin(9600);        // Se inicializa la comunicación serie
}
 
void loop() {
  
 
  
  if(Serial.available() > 0){    // Hay datos disponibles desde el bluetooth?
       temp = Serial.read();    // Si hay datos, se guardan en la variable temp
 
  }  
 
  if (temp == '0') {           // Si el caracter recibido es "0", apagar el LED 13 de la placa
    
    digitalWrite(led_pin, LOW);
    
    Serial.println("LED: Apagado");
 }
 
 
  else                        // Si el caracter recibido es "1", encender el LED 13 de la placa

 if (temp == '1') {
     
     digitalWrite(led_pin, HIGH);
     
     Serial.println("LED: Encendido");
 }
 
}

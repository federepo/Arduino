/****************************************************************
Programa Ejemplo: Entrada Analógica. Utilización del sensor LM35
Arduino UNO
****************************************************************/

int analog_pin = 2;
int led_pin = 13;

void setup() {
  
   Serial.begin(9600); //Se inicializa la comunicación serie con 9600 baudios

   pinMode(led_pin,OUTPUT);
}

void loop() {
  
  int entrada = 0;
  float tension = 0;
  float temperatura = 0;
    
  entrada = analogRead(analog_pin);    // Se lee el valor sensado por el LM35
 
  tension  = (5 / 1024.0) * entrada;   // Se convierte el valor en °C a V
  
  temperatura = tension / 0.01;      // Se convierte la tensión a grados celsius

  if(temperatura > 25){

  digitalWrite(led_pin, HIGH);

  Serial.print("Temperatura:"); 
  Serial.println(temperatura);

  delay(1000); 

  }

  else  
  
   digitalWrite(led_pin, LOW);
   
   Serial.print("Temperatura:"); 
   Serial.println(temperatura);
    
   delay(1000); 
}

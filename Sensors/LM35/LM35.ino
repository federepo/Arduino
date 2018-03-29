/****************************************************************
Programa Ejemplo: Entrada Analógica. Utilización del sensor LM35
Arduino UNO
****************************************************************/

int analog_pin = 2;

void setup() {
  
   Serial.begin(9600); //Se inicializa la comunicación serie con 9600 baudios
}

void loop() {
  
  int input = 0;
  float voltage = 0;
  float temperature = 0;
    
  input = analogRead(analog_pin);    // Se lee el valor sensado por el LM35
 
  voltage  = (5 / 1024.0) * input; // Se convierte el valor en °C a V
  
  temperature = voltage / 0.01;       // Se convierte la tensión a grados celsius
   
  Serial.println(temperature);
  
  delay(1000); 
}

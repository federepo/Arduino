/****************************************************************
Programa Ejemplo: Funcionamiento sensor DHT 11
Arduino UNO
****************************************************************/

#include <DHT.h>  // Se incluye la biblioteca donde se encuentran las funciones
 
#define DHTPIN 3  // Se define el pin a usar 

#define DHTTYPE DHT11  // Se define el tipo de sensor a usar. Puede ser DHT 11 o DHT 22

DHT dht(DHTPIN, DHTTYPE);  //Se indica el pin a usar y el tipo de sensor

int led_pin = 13;

void setup() {

   dht.begin();           // Se inicializa al sensor
   Serial.begin(9600);    // Se inicializa la comunicación serie
   pinMode(led_pin,OUTPUT);

}

void loop() {


  delay(1000);
 
  float humedad_rel = 0;     // se define la variable humedad relativa
  float temperatura_C = 0;   // se define la variable temperatura en °C
  
  humedad_rel = dht.readHumidity();  // Se lee la humedad relativa
  
  temperatura_C = dht.readTemperature();  // Se lee la temperatura en °C
 
 
  Serial.print("Humedad: ");           // Se presentan los datos en el monitor serial
  Serial.print(humedad_rel);
  Serial.println(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(temperatura_C);
  Serial.println(" °C ");

  if(humedad_rel > 80 && temperatura_C>26){

     digitalWrite(led_pin,HIGH);
    
  }

  else

     digitalWrite(led_pin,LOW);

 
  }

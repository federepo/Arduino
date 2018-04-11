#include <OneWire.h>
#include <DallasTemperature.h>


const int pin_ds18b20 = 8;  // Pin donde se conectará el sensor (1-Wire)


 
OneWire sensor_one_wire(pin_ds18b20);                // Se instancia a las clases OneWire y DallasTemperature    
DallasTemperature sensor_ds18b20(&sensor_one_wire);


void setup() {
  
    Serial.begin(9600);   // Se inicializa la comunicación serie con 9600 baudios
    
    sensor_ds18b20.begin(); // Se inicializa el bus 1-Wire

}

void loop() {
  
    sensor_ds18b20.requestTemperatures();             // Envío de comandos al sensor
 
    Serial.print("Temperatura: ");
    Serial.print(sensor_ds18b20.getTempCByIndex(0));  //Obtención de la temperatura
    Serial.println(" °C");
    
    delay(500); 

}

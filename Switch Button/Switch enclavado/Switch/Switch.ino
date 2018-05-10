/*********************************************************************
Programa Ejemplo: Switchs. Se acciona un pulsador y se prende el led
Arduino UNO
********************************************************************/

int Pin_switch = 2;     // Pin donde se encuentra el pulsador
int Pin_led =  8;      //  Pin donde se encuentra el LED

int Pin_estado = 0;         // Variable que chequea el estado del pin
int led_apagado = 0;


void setup() {
  
  pinMode(Pin_led, OUTPUT);  // Se inicializa al pin 8 como salida
  
  pinMode(Pin_switch, INPUT); // Se inicializa al pin 2 como entrada
  
}

void loop() {
  
  Pin_estado = digitalRead(Pin_switch); // Se lee el estado del switch. Devuelve HIGH o LOW

  if (Pin_estado == HIGH) {            // Se chequea el estado del pin

 
      if(led_apagado == 0){

         digitalWrite(Pin_led, HIGH);

         led_apagado = 1;

      }
      
  else {

       digitalWrite(Pin_led, LOW);

       led_apagado = 0;
  }

    
}

}

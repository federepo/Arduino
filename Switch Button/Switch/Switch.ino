/*********************************************************************
Programa Ejemplo: Switchs. Se acciona un pulsador y se prende el led
Arduino UNO
********************************************************************/

int Pin_switch = 2;     // Pin donde se encuentra el pulsador
int Pin_led =  8;      //  Pin donde se encuentra el LED

int Pin_estado = 0;         // Variable que chequea el estado del pin

void setup() {
  
  pinMode(Pin_led, OUTPUT);  // Se inicializa al pin 8 como salida
  
  pinMode(Pin_switch, INPUT); // Se inicializa al pin 2 como entrada
  
}

void loop() {
  
  Pin_estado = digitalRead(Pin_switch); // Se lee el estado del switch

  if (Pin_estado == HIGH) {            // Se chequea el estado del pin

    digitalWrite(Pin_led, HIGH);
  } 
  
  else {

    digitalWrite(Pin_led, LOW);
  }

}

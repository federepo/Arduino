//**************************************************************
//Programa Ejemplo: Se envía el ancho de pulso que se necesita.
//                  Frecuencia de trabajo: 490Hz

//Arduino UNO
//***************************************************************

int ledPin = 3;      // LED conectado al pin 3

int val = 0;         // Valor entre 0 y 255

void setup()
{
  pinMode(ledPin, OUTPUT);   // inicializa al pin 3 como salida
  Serial.begin(9600);
}

void loop()
{

for(val=0; val<= 255; val++){

  analogWrite(ledPin, val);  // Se escribe un número entre 0 y 255
                             // para variar el ancho del pulso
  Serial.println(val);
  
  delay(30);
}


     
}


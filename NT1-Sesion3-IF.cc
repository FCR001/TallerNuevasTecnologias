/*
   Boton sketch
   un botón en el pin 2 encenderá la un led en el pin 13
*/

const int ledPin = 13;            // Pin para el led
const int inputPin = 2;           // Pin para el botón

void setup() {
  pinMode(ledPin, OUTPUT);         // el Led como OUTPUT
  pinMode(inputPin, INPUT);        // el boton como INPUT
}

void loop(){
  int val = digitalRead(inputPin);  // Leemos el valor del boton
  if (val == HIGH)                  // si el boton esta pulsado
  {
    digitalWrite(ledPin, HIGH);     // Se enciende el LED
  }
 
}
      
    

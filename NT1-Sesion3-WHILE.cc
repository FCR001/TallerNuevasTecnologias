/*
 * Repitiendo una accion
 * el led parpadea mientras una condicion sea cierta
  */

const int ledPin = 13; // Pin para el led
const int sensorPin = 0; // Pin para el sensor de luz

void setup()
{ 
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); //El led como OUTPUT

}

void loop()
{
  while(analogRead(sensorPin) > 100)
  {
    parpadeo(); //Llamamos la funcion de parpadeo
    Serial.print(".");
  }
  Serial.println(analogRead(sensorPin)); //Se ejecuta cuando la condición
                                         //deja de cumplirse
}
void parpadeo(){
     digitalWrite(ledPin, HIGH);
     delay(100);
     digitalWrite(ledPin, LOW);
     delay(100);
}

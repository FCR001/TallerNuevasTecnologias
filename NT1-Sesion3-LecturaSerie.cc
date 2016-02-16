/*
 * Impresión de valores por el puerto serie
 * Se leera la información de un sensor de luz y se imprimira
 * 20 veces por pantalla
 */


const int sensorPin = 0; // Pin para el sensor de luz

void setup()
{ 
  Serial.begin(9600);

   for (int i=0; i < 20; i++){
  int valor = analogRead(sensorPin);
  Serial.print("El valor del sensor es ");
  Serial.println(analogRead(sensorPin)); 
  delay(1000);
  }

}

void loop()
{
 
}  


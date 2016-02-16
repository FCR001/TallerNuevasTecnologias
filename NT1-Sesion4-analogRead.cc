/* Lectura analógica
 *  El siguiente programa leera los valores de un potenciometro y los imprimira.
*/

const int analogInPin = A0;  // Pin analógico para el potenciometro

int sensorValue = 0;        // lectura del valor del potenciometro

void setup() {
  Serial.begin(9600); //Inicializamos el puerto serie
}

void loop() {
  // leemos el valor del potenciometro
  sensorValue = analogRead(analogInPin);

  // imprimimos el resultado en el monitor serie
  Serial.print("sensor = " );
  Serial.println(sensorValue);
  
  // esperamos 2 milisegundos para que se refresque el valor
  delay(10);
}

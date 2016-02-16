/*
 * CASE Sketch
 * El programa leera valores por teclado y los evaluara
 * 1 - Parpadea 1 vez
 * 2 - Parpadea 2 veces
 * 3 - Permanece encencido
 * 4 - Se apaga
 * Cualquier otra tecla - "Tecla erronea"
 */
const int ledPin = 13; // Pin para el LED

void setup()
{
  Serial.begin(9600); // Inicializamos la consola serie 
                    
  pinMode(ledPin, OUTPUT); //LED como OUTPUT
}

void loop()
{
  if ( Serial.available()) // Comprobamos si el ultimo caracter esta disponible 
                           
  {
    char teclado = Serial.read();
    switch(teclado)
    {
    case '1':
      blink();
      break;
    case '2':
      blink();
      blink();
      break;
    case '+':
      digitalWrite(ledPin,HIGH);
      break;
    case '-':
      digitalWrite(ledPin,LOW);
      break;
    default :
      Serial.print(teclado);
      Serial.println(" Tecla Erronea");
      break;
    }
  }
}

void blink()
{
  digitalWrite(ledPin,HIGH);
  delay(500);
  digitalWrite(ledPin,LOW);
  delay(500);
}

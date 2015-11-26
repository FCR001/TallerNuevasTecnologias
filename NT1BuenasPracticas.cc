int x = 3; //Declaramos la variable x con valor 3 

void setup() {
  Serial.begin(9600);
}

void loop() {
/* El siguiente código escribe en la consola serie el 
  texto Hola mundo */  
Serial.print("Hola Mundo\n");

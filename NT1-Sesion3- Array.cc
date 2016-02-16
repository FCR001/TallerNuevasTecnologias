 
//Declaramos un array de 4 elementos 
 int PinesEntrada[4] ;      

void setup() {
 Serial.begin(9600);
}

void loop() {
//Asignamos valores a los elementos del array 
 PinesEntrada[0] = 2;
 PinesEntrada[1] = 3;
 PinesEntrada[2] = 4;
 PinesEntrada[3] = 5;

//Imprimimos los valores en el terminal
 Serial.print("El valor de la posicion 0 es: ");
 Serial.println(PinesEntrada[0]);
 delay(1000);
 

 

}

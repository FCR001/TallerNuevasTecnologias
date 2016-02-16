//Declaramos las variables tipo string
 String texto1  = "Esta es una variable de tipo cadena";
 String texto2; //La asignaremos durante el programa

void setup() {
 Serial.begin(9600);

 //Podemos contar el numero de caracteres de una cadena

 Serial.println(texto1);
 delay(1000);
 Serial.print("La cadena texto1 tiene ");
 Serial.print(texto1.length());
 Serial.println(" caracteres");
 delay(1000);

 //Los textos se puede unir

 String texto3 = " que puede ser ampliado";
 texto1.concat(texto3);
 texto2 = "Hemos unido 2 textos en la variable texto1";
 delay(1000);
 Serial.println(texto2);
 delay(1000);
 Serial.println(texto1);
}

void loop() {
 

}

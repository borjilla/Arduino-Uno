byte i=0;    //Variable contador para los bucles for
int del=100; //Variable que marca el tiempo en los delay()

/*Inicializamos los pines digitales 6, 7 y 8 como salida.
Hacerlo con un for nos ahorra muchas líneas de código */
void setup() {
  for (i = 6; i<=8 ; i++) { 
    pinMode(i, OUTPUT);
    } 
}

void loop() {
      //Parpadean los LEDs del 6 al 8
       for (i = 6; i<=8; i++) {
             digitalWrite(i, HIGH);
             delay(del);
             digitalWrite(i, LOW);
       }
   /*Parpadean los LEDs del 8-1 (7) hasta el 6+1 (7). En
   este caso particular, no habría hecho falta ningún bucle
   porque solo hay un LED entre ambos extremos (el 7) pero
   se deja como demostración para posibles ampliaciones */
       for (i = 7; i>=7; i--) {
             digitalWrite(i, HIGH);
             delay(del);
             digitalWrite(i, LOW);
             } 
}

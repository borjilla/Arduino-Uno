int leds[]={5,6,7};
int i=0;
int tiempo=200;
void setup (){
       for(i=0;i<=2;i++) {
             pinMode(leds[i],OUTPUT);
      }
       pinMode(8,INPUT);
       Serial.begin(9600);
}
void loop () {
//Recorro los LEDs del array, iluminándolos y apagándolos
       for(i=0;i<=2;i++) {
             digitalWrite(leds[i],HIGH);
             delay(tiempo);
//Antes de apagar cada LED, miro si el jugador ha acertado
             compruebaacierto();  //Función propia
             digitalWrite(leds[i],LOW);
             delay(tiempo);
      } 
}
void compruebaacierto(){
/*Si se tiene pulsado el botón y ahora mismo el LED encendido es de 
índice 1 dentro del array (el del medio), se acertó */
      if(digitalRead(8)==HIGH && i==1) {
        Serial.println("Acierto");
        tiempo=tiempo-20;
        if(tiempo<10){
          tiempo=200;
          }
      }

}

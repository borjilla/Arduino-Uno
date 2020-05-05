int estadoBoton=0; //Guardará el estado del botón (HIGH ó LOW)

void setup(){
       pinMode(8,INPUT); //Pin donde está conectado el pulsador
      Serial.begin(9600);
}
void loop() {
  estadoBoton=digitalRead(8);
  Serial.println(estadoBoton);
  delay (50);  //Para mayor estabilidad entre lecturas
}

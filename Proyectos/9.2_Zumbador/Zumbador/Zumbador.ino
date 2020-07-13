void setup (){
     pinMode (8, OUTPUT); //Pin al que está conectado el zumbador
}
void loop (){
     digitalWrite (8, HIGH);
     delayMicroseconds (1000);
     digitalWrite (8, LOW);
     delayMicroseconds (1000);
}

int valorPot=0;
void setup(){
     Serial.begin(9600);
}
void loop(){
     valorPot=analogRead(2);
     Serial.println(valorPot);
     delay(100);
}

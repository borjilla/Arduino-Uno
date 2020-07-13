int valorPot = 0;
void setup() {
     pinMode(9, OUTPUT);
}
void loop() {
     valorPot = analogRead(2);
     digitalWrite(9, HIGH);
     delay(valorPot);
     digitalWrite(9, LOW);
     delay(valorPot);
}

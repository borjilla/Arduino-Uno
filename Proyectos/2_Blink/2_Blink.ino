//Programa Blink
void setup() {
  // inicializa el pin digital 4 como salida.
  Serial.begin(9600);
  pinMode(4, OUTPUT);
}

// la función de bucle se ejecuta una y otra vez para siempre
void loop() {
  digitalWrite(4, HIGH);     // enciende el LED (ALTO es el nivel del voltaje)
  Serial.println("Encendido");
  delay(1000);               // Espera un segundo
  digitalWrite(4, LOW);      // apaga el LED (BAJO es el nivel del voltaje)
  Serial.println("Apagado");
  delay(1000);               // Espera un segundo
}

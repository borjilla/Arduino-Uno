/*Declaración e inicialización de una
  variable global llamada “mivariable” */
  
int mivariable=1;

void setup() {
  // pon tu código de configuración aquí, para ejecutarlo una vez:
 Serial.begin(9600);
}

void loop() {
  // pon tu código principal aquí, para ejecutarlo repetidamente:
  Serial.println(mivariable);
  mivariable=mivariable+1;
}

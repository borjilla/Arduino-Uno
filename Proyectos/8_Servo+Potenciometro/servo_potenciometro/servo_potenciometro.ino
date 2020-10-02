#include <Servo.h>
Servo miservo;
int valorPot = 2;
void setup() {
     miservo.attach(3);
}
void loop() {
     valorPot = analogRead(2);
/*Los valores de analogRead() van desde 0 a 1023 y los valores
aceptados por miservo.write() van desde 0 a 180, por eso reajustamos 
el valor leído para poderlo utilizar con el servomotor. En este caso 
particular, como los mínimos de ambos rangos son 0, en vez de map() 
podríamos haber escrito una simple regla de proporcionalidad, mediante 
la fórmula valorPot=valorPot*(180.0/1023.0)*/

     valorPot = map(valorPot, 0, 1023, 0, 180);
     miservo.write(valorPot);
     delay(15);  //Para dar tiempo al servo a moverse
}

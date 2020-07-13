/*Otro ejemplo puede ser (con el mismo circuito anterior) 
ordenar al servomotor que se sitúe en un ángulo determinado
especificado a través del canal serie:
*/

#include <Servo.h>
Servo miservo;
void setup() {
       Serial.begin(9600);
       miservo.attach(3);
}
void loop(){
       long angulo;
       if (Serial.available() > 0) {
        angulo=Serial.parseInt();
        if (angulo > 0 && angulo < 180){
          miservo.write(angulo);
          delay(15);
          }
        }
}

#include <Servo.h>
Servo miservo;
int i = 0;
void setup() {
       miservo.attach(3);
}
void loop(){
      //Va de 0 a 180 grados en pasos de un grado
      for(i = 0; i < 180; i++)   {
                 miservo.write(i);
                 //Esperamos a que el servo alcance la nueva posición
                 delay(15);
      }
      //De 180 a 0
      for(i = 180; i>=1; i--) {
        miservo.write(i);
        delay(15);
      }
}

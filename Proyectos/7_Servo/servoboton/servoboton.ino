/*Evidentemente, con pulsadores no solo podemos controlar 
LEDs, sino cualquier otro tipo de actuador. Por ejemplo, 
en un circuito con dos pulsadores conectados a los pines 
de entrada digital no 7 y no 8 respectivamente (además de 
a la alimentación y a tierra a través de una resistencia 
“pull-down”) y un servomotor conectado al pin de salida 
PWM no 3 (además de a la alimentación y a tierra), 
podríamos ejecutar el siguiente código. Gracias a él, 
pulsando un botón el servomotor se movería en un sentido 
de giro, y pulsando el otro botón se movería en sentido 
contrario.
*/

#include <Servo.h>

Servo miservo;
int pos = 90;  //Posición del servo
void setup()  {
       pinMode(7, INPUT);
       pinMode(8, INPUT);
       miservo.attach(3);
       miservo.write(pos);//Posición inicial en el centro
}
void loop() {
       if(digitalRead(7) == HIGH)  {
            if( pos > 0)  {
                    pos--;
                 //Mueve el servo de 180 a 0 grados
                    miservo.write(pos);
             }
       if(digitalRead(8) == HIGH)  {
             if( pos < 180)  {
                    pos=pos++;
 //Mueve el servo de 0 a 180 grados miservo.write(pos);
             }
       }
       }
}

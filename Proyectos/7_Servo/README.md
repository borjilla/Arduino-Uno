### **Servo**
Los servomotores –también llamados “servos”– son motores “gearhead” (por tanto, motores DC con engranajes que limitan la velocidad pero aumentan el torque) que incorporan además un potenciómetro y cierta circuitería de control para poder establecer la posición del eje del motor de forma precisa. Es decir, su eje no gira libremente (como lo hace el de los motores DC) sino que rota un determinado ángulo, indicado a través de una señal de control. Lo que hace especial a un servo es, por tanto, que podemos ordenarle que gire una cantidad de grados concreta, cantidad que dependerá de la señal de control enviada en un momento dado por (por ejemplo) un microcontrolador programado por nosotros. Los servos son muy comunes en juguetes y otros dispositivos mecánicos pequeños (como por ejemplo el control de la dirección de un coche teledirigido), pero también sirven gestionar el movimiento de timones, pequeños ascensores, palancas, etc.

Los servomotores disponen normalmente de tres cables (a diferencia de los motores DC y “gearhead”, que tienen solo dos): uno para recibir la alimentación eléctrica (normalmente de color rojo), otro para conectarse a tierra (normalmente de color negro o marrón, según el fabricante) y otro (el cable de control, normalmente de color blanco, amarillo o naranja) que sirve para transmitir al servo, de parte del microcontrolador, los pulsos eléctricos –de una frecuencia fija de 50 Hz en la gran mayoría de servomotores– que ordenarán el giro concreto de su eje. El cable de alimentación ha de conectarse a una fuente que pueda proporcionar 5 V y al menos 1 A. El cable de tierra ha de conectarse lógicamente a la tierra común del circuito. El cable de control debe conectarse a algún pin digital de la placa Arduino, por el cual se enviarán los pulsos que controlarán el desplazamiento angular del eje. A diferencia de los demás motores DC, para cambiar el sentido de giro del eje de los servos no es necesario invertir la polaridad de su alimentación, por lo que no es necesario incluir ningún “puente H”.

Los conectores del servo son ligeramente diferentes según el fabricante, pero todos suelen ser compatibles para el uso en breadboards y similares. No obstante, hay que tener en cuenta que los distribuidos en la tienda oficial de Arduino son conectores de tipo Tinkerkit, ya que están específicamente pensados para ser conectados al “Sensor Shield” de Tinkerkit (un shield especialmente equipado con diferentes conectores Tinkerkit para enchufar allí diferentes sensores y actuadores compatibles sin necesidad de breadboard).
Los servomotores que utilizaremos en los proyectos de este libro son los más pequeños (los de tipo llamado “hobby”). Su voltaje de trabajo es de entre 5 V y 7 V, así que con la propia placa Arduino los podemos alimentar. No obstante, el consumo eléctrico de un servo es proporcional a la carga mecánica que soporta su eje (es decir, un servo consume más cuanta más “fuerza” –técnicamente, torque– necesite generar para contrarrestar la masa de los objetos colocados sobre su eje y que se oponen a su giro). Esto significa que, en la práctica, dependiendo de la carga que se le coloque al servo, será necesario utilizar una fuente externa de 5 V adicional independiente para proporcionarle una alimentación separada de la ofrecida a través de la placa Arduino (pero con la tierra común siempre). La fuente adicional también será necesaria cuando se empleen más de dos servos en nuestros circuitos, tengan la carga que tengan.

La magnitud del desplazamiento angular del eje de un servomotor está determinada por la duración de los pulsos de la señal de control. Concretamente, si el valor ALTO (5 V) del pulso se mantiene durante 1,5 milisegundos, el eje del servo se ubicará en la posición central de su recorrido. Como los servos estándar permitenmover su eje en ángulos dentro de un rango entre 0 y 180 grados, esta posición central suele corresponder a 90 grados respecto al origen. Es decir: si al servomotor se le envía una señal con pulso de 1,5 ms, el eje girará hasta estar situado en un ángulo de 90 grados respecto al origen (por tanto, a mitad de su recorrido total). Mientras la señal de control recibida por el servomotor sea siempre la misma, este mantendrá la posición angular de su eje: si la duración del pulso de la señal varía, entonces el servomotor girará hasta la nueva posición.

Si el ancho del pulso está entre 1,5 y 2 milisegundos, el eje del servo se moverá hasta una posición angular proporcional entre 90 y 180 grados del origen. Por ejemplo: si lo quisiéramos situar a 150 grados, la longitud del pulso debería ser de 1,83 ms; si quisiéramos situarlo a 180 grados (ángulo máximo), la longitud del pulso debería ser de 2 ms (duración máxima).

Si el ancho del pulso está entre 1 y 1,5 milisegundos, el eje del servo se moverá a una posición angular proporcional entre 0 y 90 grados del origen. Por ejemplo: si lo quisiéramos situar a 30 grados, la longitud del pulso debería ser de 1,17 ms; si quisiéramos situarlo a 0 grados (es decir, el propio origen), la longitud del pulso debería ser de 1 ms (duración mínima).

De todas formas, existen modelos de servos que llegan hasta los 210 grados de rotación, por lo que, en todo caso, se recomienda consultar los datos ofrecidos por el fabricante para conocer las características de cada servo en particular.
Por otro lado, hemos de destacar también la existencia de los servomotores de rotación continua, los cuales son algo especiales. En realidad, se comportan más como motores “gearhead” que como servos propiamente dichos, porque no se les puede establecer su ángulo de giro, pero, en cambio, sí su velocidad de giro. Lo más interesante es que podemos cambiar su sentido del giro sin necesidad de ninguna circuitería extra (como serían los “puentes H” o similares).

La señal de control de un servomotor de rotación continua está formada por pulsos cuadrados, generalmente a una frecuencia de 50 Hz (por tanto, igual que la de los servomotores estándar). Cuando la duración del valor ALTO (5 V) de un pulso se mantiene durante 1,5 ms, un servomotor de rotación continua permanece parado. A medida que aumenta esa duración, su velocidad de giro aumenta en un determinado sentido, hasta llegar a la velocidad máxima cuando el valor ALTO del pulso llegue a durar un máximo de 1,7 ms (generalmente). Si, por el contrario, la duración del valor ALTO del pulso es menor de 1,5 ms, el giro se producirá en el sentido contrario, y su velocidad irá en aumento a medida que la longitud del pulso disminuya, hasta llegar a durar un mínimo de 1,3 ms (generalmente). Por ejemplo, si un servomotor de este tipo recibe una señal con un pulso de 1,525 ms, girará lentamente en un sentido, y si recibe una señal con un pulso de 1,575 ms girará en el mismo sentido pero algo más deprisa; si recibe un pulso de 1,395 ms, girará más deprisa aún, pero en el otro sentido.

### **Materiales necesarios**
- Arduino-Uno.
- Servo.
- Cables.
### **Montaje**
![Captura de pantalla 2020-07-02 a las 22 33 01](https://user-images.githubusercontent.com/47045714/86409746-c814cf00-bcb9-11ea-88c7-ae1e2e78f5b1.png)

### **Esquema**
![Captura de pantalla 2020-07-02 a las 22 33 15](https://user-images.githubusercontent.com/47045714/86409822-e975bb00-bcb9-11ea-9909-902367d62f9c.png)


### **Movimiento del servo 0 a 180 grados**
El siguiente código mueve de forma continua el eje del servomotor desde un ángulo de 0 grados hasta 180 y seguidamente lo mueve en sentido contrario de 180 grados a 0, y así ininterrumpidamente.








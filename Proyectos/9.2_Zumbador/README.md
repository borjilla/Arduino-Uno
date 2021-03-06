### **Zumbador**
Un zumbador piezoeléctrico (en inglés, “buzzer” o “piezobuzzer”) es un dispositivo que consta internamente de un disco de metal, que se deforma (debido a un fenómeno llamado piezoelectricidad) cuando se le aplica corriente eléctrica. Lo interesante es que si a este disco se le aplica una secuencia de pulsos eléctricos de una frecuencia suficientemente alta, el zumbador se deformará y volverá a recuperar su forma tan rápido que vibrará, y esa vibración generará una onda de sonido audible.

Recordemos que un sonido aparece cuando vibra alguna fuente y estas vibraciones son transmitidas en forma de onda a través de algún medio elástico (como el aire o el agua). Si la frecuencia de esa onda está dentro de un rango determinado (el llamado “espectro audible”, el cual va de 20 Hz a 20 KHz), cuando llega al oído humano esas oscilaciones en la presión del aire son convertidas en el sonido que nuestro cerebro percibe.

Cuanto mayor sea la frecuencia de la onda sonora, más agudo será el sonido resultante (y al revés: cuanto menor es esa frecuencia, más grave es el sonido). Por tanto, para generar diferentes tonos con nuestro zumbador deberemos hacer vibrar la membrana a distintas frecuencias. Para ello, deberemos emitir desde nuestro Arduino pulsos digitales con la frecuencia deseada. Los zumbadores admiten voltajes desde 3 a 30 voltios, así que los 5 V de una salida digital de Arduino los soporta perfectamente.

Así pues, para hacer sonar un zumbador típico (como por ejemplo, el producto no 160 de Adafruit o similar), simplemente deberemos conectar uno de sus terminales a tierra y el otro a un pin-hembra digital del Arduino configurado como salida digital. Atención, dependiendo del modelo de zumbador, este puede ser un componente polarizado o no, por lo que hay que fijarse si tiene alguna marca indicando la polaridad de sus terminales. Si se desea, al zumbador se le puede conectar en serie un divisor de tensión (de 100 Ω está bien): pero hay que tener en cuenta que cuanta mayor resistencia tenga este divisor, menor será el volumen del sonido generado.


### **Materiales necesarios**
- Arduino-Uno.
- Zumbador
- Protoboard.
- Cables.

### **Montaje**

![5 0_1024x1024](https://user-images.githubusercontent.com/47045714/87345928-1eeb9580-c551-11ea-936c-814369247372.png)

### **Ejercicio 1**
Lo que estamos haciendo es enviar consecutivamente pulsos digitales HIGH y LOW a una velocidad tan elevada que hace vibrar el zumbador a una frecuencia audible por el ser humano. Concretamente, el pulso HIGH lo hacemos durar 1 ms y el pulso LOW otro 1 ms, por lo que el período de esta onda cuadrada es de 2 ms (0,002s). Por tanto, como f = 1/T, la frecuencia de la señal audible generada será de 1/0,002 = 500 Hz.

### **Ejercicio 2**
Podemos hacer que la frecuencia del sonido vaya cambiando. Por ejemplo, el siguiente sketch reproduce (una sola vez) un sonido que pasa de ser grave a ser agudo de forma continua. Esto es porque al principio su periodo es de 10000 ms (es decir, 1/0,01 = 100 Hz) y al final su periodo es de 100 ms (es decir, 1/0,0001 = 10 KHz). Fijarse que podemos variar la duración del sonido si modificamos el incremento (es decir, el tercer parámetro del for, que en este caso es un decremento). Para probar este código, se ha de usar el mismo circuito que el ejemplo anterior.

### **Ejercicio 3**
Añadamos ahora al circuito anterior un potenciómetro. La patilla de un extremo (cualquiera) la conectaremos a la misma tierra que el zumbador, la patilla del otro extremo a la alimentación (que puede ser proporcionada por la propia placa Arduino a través del pin “5V”) y la patilla central a un pin de entrada analógica de Arduino (por ejemplo, el no 0). Gracias al sketch siguiente, seremos capaces de cambiar el tono del sonido generado por el zumbador simplemente girando la rueda del potenciómetro.




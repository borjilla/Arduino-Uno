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

### **Ejercicio**





### **Pulsadores**
En este apartado veremos varios ejemplos donde la placa Arduino realiza lecturas de señales digitales recibidas específicamente de parte de pulsadores. A priori esto puede parecer un poco extraño, ya que en principio un pulsador tan solo sirve para abrir o cerrar un circuito, pero hemos de saber que también tiene la capacidad de permitir la “monitorización” de su estado, de tal forma que con una señal de entrada digital la placa Arduino puede saber en todo momento si el pulsador está en posición abierta o posición cerrada. Para conseguir esta capacidad de “monitorización”, los pulsadores han de estar obligatoriamente conectados a una resistencia “pull-up” o bien “pull-down”. Así pues, tenemos dos posibilidades de circuitos.
A continuación, mostramos el dibujo (y esquema correspondiente) del circuito que es capaz de monitorizar el estado de un pulsador utilizando una resistencia “pull-down”
### **Materiales necesarios**
- Arduino-Uno.
- Pulsador.
- Resistencia.
- Protoboard.
- Cables.
### **Montaje**

![Captura de pantalla 2020-05-02 a las 16 53 52](https://user-images.githubusercontent.com/47045714/80867731-0b40ca80-8c96-11ea-91f2-78a6ea594eed.png)

### **Esquema**

![Captura de pantalla 2020-05-02 a las 16 54 17](https://user-images.githubusercontent.com/47045714/80867741-0e3bbb00-8c96-11ea-8f74-bc855b0552e1.png)

### **Explicación**
Podemos comprobar cómo las conexiones del pulsador son por un lado directa a la alimentación y por otro a tierra a través de la resistencia “pull-down” (pongamos que de 10 KΩ). Existe un tercer cable, conectado entre el pulsador y la resistencia que va a parar a un pin digital de la placa Arduino (en este caso particular, el no 8). Este pin digital deberá configurarse como pin de entrada porque allí será donde se reciba la señal que indique el estado del pulsador.

En esta configuración, cuando el botón está abierto (es decir, cuando no está pulsado), el “tercer cable” está conectado a tierra a través de la resistencia “pull- down”, por lo que recibe una señal de 0 V (LOW). Cuando el botón está cerrado (es decir, cuando sí está pulsado), el “tercer cable” se conecta al pin de alimentación, por lo que recibe una señal de 5 V (HIGH). Está claro que en este último caso, el “tercer cable” seguirá estando conectado a tierra, pero la corriente proveniente de la alimentación apenas se desviará a tierra por allí (porque precisamente la resistencia “pull-down” se opone a ello) y por tanto circulará a través del “tercer cable”, que ofrece una alternativa a los electrones para cerrar el circuito más fácilmente.

La necesidad de una resistencia “pull-down” se ve claramente si se desconecta el “tercer cable” de todo: la entrada empezará a “flotar” ya que no tiene ninguna conexión sólida a alimentación o tierra y los valores recibidos serán HIGH o LOW aleatoriamente.
Una vez diseñado el circuito, ¿cómo podemos observar el estado actual del pulsador en un sketch de Arduino? Una manera podría ser mediante el “Serial monitor”. A continuación, mostramos el código de ejemplo. Si lo ejecutamos, veremos que mientras tengamos pulsado el botón, en el “Serial monitor” aparecerá un 1, y cuando esté sin pulsar aparecerá un 0.



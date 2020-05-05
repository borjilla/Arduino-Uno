### **¿Otra vez el Led?**

Si!!! Veamos otro ejemplo más de salidas digitales. Como se puede ver en las figuras siguientes, ahora tenemos 3 LEDs, conectados en paralelo. Cada uno de ellos recibirá una señal digital proveniente de un pin-hembra de la placa Arduino (en nuestro ejemplo, son el 6, 7 y 8 respectivamente, pero podrían ser otros cualesquiera). La tarea del circuito es realizar un encendido de los LEDs de tal forma que simule el efecto “coche fantástico” (sin estela); es decir, que se enciendan los LEDS por este orden: 6, 7, 8, 7, 6, 7, 8...

### **Materiales necesarios**
- Arduino-Uno.
- 3 Led distintos colores+resistencia.
- Protoboard.
- Cables.

### **Montaje**


![Captura de pantalla 2020-05-02 a las 16 47 46](https://user-images.githubusercontent.com/47045714/80867704-dfbde000-8c95-11ea-83f6-93387a62ecb8.png)


### **Esquema**

![Captura de pantalla 2020-05-02 a las 16 47 53](https://user-images.githubusercontent.com/47045714/80867707-e187a380-8c95-11ea-9b08-2c04c2d08b99.png)

### **Explicación**
Fijarse que como divisor de tensión hemos utilizado una sola resistencia. Podríamos haber utilizado una resistencia conectada en serie a cada LED (es decir, tres resistencias en total) para conseguir el mismo objetivo, pero tal como lo hemos hecho nos ahorramos dos resistencias.

### **Propuestas Extra**
- Este programa que hemos hecho es muy dificil :( Vale, vamos hacer uno sencillisisisimo, encender todos los leds a la vez y apagarlos. Esta vez te doy hasta el código.

![Captura de pantalla 2020-05-02 a las 19 40 44](https://user-images.githubusercontent.com/47045714/80871426-dab85b00-8cac-11ea-8959-82ddbfb3459d.png)

-Modifica el programa anterior para que se encienda primero el led verde, un segundo después el led ámbar y un segundo después el led rojo.La instrucción que se debe utilizar para esperar un segundo. delay(1000)

-Modifica el programa para que funcione como un semáforo.
Primero se encenderá el led verde durante 3 segundos.
A continuación se apagará el led verde y se encenderá el led ámbar durante 1 segundo.
A continuación se apagará el led ámbar y se encenderá el led rojo durante 3 segundos.
La secuencia se repetirá continuamente.



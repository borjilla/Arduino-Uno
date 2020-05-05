### **Blink**
Ahora aprendamos a encender el módulo LED. Conocemos los tres componentes básicos de un sistema de control: entrada, control y salida. Pero iluminar el LED usa solo la salida, no la entrada. 
### **¿Qué es la señal digital?**
**Señal digital:** la señal digital se refiere al valor de la amplitud es discreta, la amplitud está limitada a un número finito de valores. En nuestro controlador, la señal digital tiene dos estados: (BAJO) LOW (0V) para 0; (ALTO) HIGH (5V) para 1. Por lo tanto, enviar una señal (ALTA)HIGH al LED puede encenderlo.
![señal](https://user-images.githubusercontent.com/47045714/80849894-844e0c80-8c19-11ea-805c-2e87d8a90c95.png)
### **Materiales necesarios**
- Arduino-Uno.
- Led+resistencia.
- Protoboard.
- Cables.
### **Montaje**

![Captura de pantalla 2020-05-02 a las 16 25 57](https://user-images.githubusercontent.com/47045714/80867671-b0a76e80-8c95-11ea-8b8b-d114fb1e2d3d.png)


### **Esquema**

![Captura de pantalla 2020-05-02 a las 16 29 32](https://user-images.githubusercontent.com/47045714/80867677-b309c880-8c95-11ea-954e-5005629f1f6a.png)

### **Explicación**
¿Por qué intercalamos las funciones delay() en medio de las dos digitalWrite()? Porque si no estuvieran, el envío de la señal HIGH y el de la señal LOW se harían sumamente seguidos (ya que la velocidad con la que el microcontrolador pasa de ejecutar una línea del sketch a la siguiente es tremendamente alta; de hecho, eventos escritos en líneas contiguas dentro de la función “loop()” los podemos considerar prácticamente simultáneos) y nuestro ojo no podría distinguir ningún parpadeo. La función delay() sirve para pausar (“congelar”) el sketch un determinado tiempo y así mantener la señal previamente enviada por los dos digitalWrite() de forma que se pueda apreciar. Es evidente, pues, que escribir un tiempo menor en delay() hará que el parpadeo sea más rápido, y un tiempo mayor lo contrario. De hecho, si reducimos el parámetro de delay() hasta aproximadamente 10 milisegundos, veremos que efectivamente el LED deja de parpadear; esto es porque el parpadeo es tan rápido que nuestro ojo ya es incapaz de observarlo. Como dato curioso, si con 10 ms de delay() además movemos nuestro montaje de un lado a otro dentro de una habitación oscura, veremos que el LED deja un camino de luz.

### **Propuestas Extra**
- Cambia el sentido del led para que los pines estén conectados al revés. Puedes comprobar que el led se apaga cuando está conectado al revés. Al ser un diodo, solo permite el paso de la electricidad en un sentido y no lo permite en el sentido contrario. Si en algún momento un led no funciona, comprueba que está conectado en el sentido correcto.
- Haz el mismo montaje anterior pero utilizando el pin 7 para conectar el diodo LED.
- Cambia la resistencia de 220 Ohmios por otra resistencia de 1000 Ohmios. Comprobarás que la luminosidad del led disminuye.
- Con el montaje anterior haz que el diodo esté encendido 1 segundo y apagado 2.

Estos son fáciles, vamos a subir el nivel, **¿qué hariamos si nos robaran los delay?**
El truco para no usar delay(), tal como se puede ver en el código siguiente, es guardar el tiempo de la última vez que el LED se encendió o se apagó y comprobar entonces en cada vuelta del “loop()” si ya ha pasado el tiempo suficiente para cambiar el estado del LED. Evidentemente, esta idea se puede generalizar para gestionar la periodicidad de todo tipo de eventos.

![Captura de pantalla 2020-05-02 a las 2 49 53](https://user-images.githubusercontent.com/47045714/80851077-bd897b00-8c1f-11ea-9751-466160d40edd.png)

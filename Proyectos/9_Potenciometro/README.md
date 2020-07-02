### **Potenciometro+Led**
Los ejemplos del apartado anterior sobre les, pero nos gustaría modificar el brillo del LED a voluntad. Para ello, en nuestros circuitos podríamos utilizar un potenciómetro conectado por un extremo a una fuente de voltaje conocido (los 5 V ofrecidos por la propia placa Arduino ya nos va bien), por otro a tierra y por su patilla central a algún pin de entrada analógico de la placa. La idea es que la placa reciba (proveniente de esa patilla central) una señal analógica controlable a voluntad, y aprovechar esto para “reenviarla” a las salidas analógicas de la placa que queramos. En otras palabras: usaremos un potenciómetro conectado a una entrada analógica como intermediario para manipular un dispositivo conectado a alguna salida PWM (como un LED). Si no decimos lo contrario, en nuestros proyectos utilizaremos un potenciómetro de 10 KΩ.

Ya sabíamos que un potenciómetro es una resistencia variable controlable por su patilla central, pero ¿cuál es esta señal analógica que recibe la placa Arduino proveniente de él? Esta señal es el voltaje existente entre la patilla central y el extremo del potenciómetro conectado a tierra. Por pura y simple Ley de Ohm, al variar la resistencia existente entre la patilla central y sus extremos, varía también la caída de potencial entre estos puntos. Concretamente, cuando entre la patilla central y el extremo del potenciómetro conectado a la alimentación haya una resistencia cercana a cero (y por tanto la resistencia entre la patilla central y el otro extremo, el conectado a tierra, sea máxima), el voltaje leído por la entrada analógica será cercano a 5 V. Cuando la patilla central esté en el otro lado, tocando al extremo conectado a tierra, la lectura será cercana a 0 V. Esta lectura del voltaje (analógico) controlable es el que hemos dicho que podremos “reenviar” a través de los pines PWM de la placa a los dispositivos que deseemos controlar analógicamente.
Recordemos por otro lado que la placa Arduino dispone de un conversor analógico-digital que solo permite utilizar valores entre 0 y 1023, por lo que el valor máximo del voltaje leído a través del potenciómetro (es decir, los 5 V) es convertido siempre al valor numérico 1023 (y el mínimo, lógicamente a 0). Los valores intermedios son convertidos proporcionalmente según la cantidad de voltaje recibido por el pin.

### **Materiales necesarios**
- Arduino-Uno.
- Potenciometro.
- Protoboard.
- Resistencia.
- Led.
- Cables.
### **Montaje**
![Captura de pantalla 2020-07-02 a las 23 23 41](https://user-images.githubusercontent.com/47045714/86410530-33ab6c00-bcbb-11ea-9cb7-ba94468ceb90.png)

### **Esquema**
![Captura de pantalla 2020-07-02 a las 23 23 48](https://user-images.githubusercontent.com/47045714/86410541-38702000-bcbb-11ea-848c-95875d6e5400.png)


### **Movimiento del servo mediante el monitor serial**
Empezaremos por un circuito muy sencillo para ver en la práctica todo lo que se acaba de explicar. Consta tan solo de un potenciómetro y nada más, conectado tal como se ha dicho. El pin de entrada analógico escogido ha sido el número 2.

-De todas formas, tendría más gracia observar el valor analógico correspondiente a esa lectura. Es decir, ya sabemos que si vemos un 1023 este valor se corresponde con 5 V (esto es solo porque suponemos que estamos alimentando el potenciómetro con 5 V –los ofrecidos por la propia placa–), pero ¿y si vemos un 584? ¿Cuántos voltios se reciben en ese caso por la entrada analógica? Para saberlo, simplemente debemos aplicar una regla de proporcionalidad: multiplicar el valor leído por 5/1023.

![Captura de pantalla 2020-07-02 a las 23 26 07](https://user-images.githubusercontent.com/47045714/86410640-6f463600-bcbb-11ea-94a4-3019415e63fc.png)

Con un poco de imaginación, podríamos modificar el ejemplo anterior para que en vez de mostrar el voltaje leído por el canal serie, lo visualizáramos en una tira de LEDs (10 por ejemplo), a modo de “termómetro” luminoso. Se deja como ejercicio.

-¿Y si le ponemos al circuito anterior un LED?
Todo esto lo probaremos en el siguiente circuito, donde añadiremos un LED (conectado a un pin de la placa que ha de ser de tipo PWM, como por ejemplo el no 9) al potenciómetro que ya teníamos montado.

![Captura de pantalla 2020-07-02 a las 23 28 32](https://user-images.githubusercontent.com/47045714/86410834-d4019080-bcbb-11ea-8de0-63e5d1c616b7.png)

Y aquí está el código:

![Captura de pantalla 2020-07-02 a las 23 30 38](https://user-images.githubusercontent.com/47045714/86410968-1b881c80-bcbc-11ea-9f74-3d90aed0bbfb.png)







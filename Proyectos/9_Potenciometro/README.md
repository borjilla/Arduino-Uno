### **Servo+Potenciometro**
Los ejemplos del apartado anterior sobre les, pero nos gustaría modificar el brillo del LED a voluntad. Para ello, en nuestros circuitos podríamos utilizar un potenciómetro conectado por un extremo a una fuente de voltaje conocido (los 5 V ofrecidos por la propia placa Arduino ya nos va bien), por otro a tierra y por su patilla central a algún pin de entrada analógico de la placa. La idea es que la placa reciba (proveniente de esa patilla central) una señal analógica controlable a voluntad, y aprovechar esto para “reenviarla” a las salidas analógicas de la placa que queramos. En otras palabras: usaremos un potenciómetro conectado a una entrada analógica como intermediario para manipular un dispositivo conectado a alguna salida PWM (como un LED). Si no decimos lo contrario, en nuestros proyectos utilizaremos un potenciómetro de 10 KΩ.

Ya sabíamos que un potenciómetro es una resistencia variable controlable por su patilla central, pero ¿cuál es esta señal analógica que recibe la placa Arduino proveniente de él? Esta señal es el voltaje existente entre la patilla central y el extremo del potenciómetro conectado a tierra. Por pura y simple Ley de Ohm, al variar la resistencia existente entre la patilla central y sus extremos, varía también la caída de potencial entre estos puntos. Concretamente, cuando entre la patilla central y el extremo del potenciómetro conectado a la alimentación haya una resistencia cercana a cero (y por tanto la resistencia entre la patilla central y el otro extremo, el conectado a tierra, sea máxima), el voltaje leído por la entrada analógica será cercano a 5 V. Cuando la patilla central esté en el otro lado, tocando al extremo conectado a tierra, la lectura será cercana a 0 V. Esta lectura del voltaje (analógico) controlable es el que hemos dicho que podremos “reenviar” a través de los pines PWM de la placa a los dispositivos que deseemos controlar analógicamente.
Recordemos por otro lado que la placa Arduino dispone de un conversor analógico-digital que solo permite utilizar valores entre 0 y 1023, por lo que el valor máximo del voltaje leído a través del potenciómetro (es decir, los 5 V) es convertido siempre al valor numérico 1023 (y el mínimo, lógicamente a 0). Los valores intermedios son convertidos proporcionalmente según la cantidad de voltaje recibido por el pin.

### **Materiales necesarios**
- Arduino-Uno.
- Potenciometro.
- Protoboard.
- Cables.
### **Montaje**



### **Esquema**


### **Movimiento del servo mediante el monitor serial**
Empezaremos por un circuito muy sencillo para ver en la práctica todo lo que se acaba de explicar. Consta tan solo de un potenciómetro y nada más, conectado tal como se ha dicho. El pin de entrada analógico escogido ha sido el no 2.





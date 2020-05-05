### **Juegos Pulsador+Leds**
Vamos a diseñar ahora otro circuito: un juego. El circuito constará de tres LEDs conectados cada uno (a través de su respectivo divisor de tensión en serie) a un pin digital diferente de la placa Arduino. Estos LEDs se irán encendiendo y apagando de forma secuencial, y cuando el LED del medio se encienda, el jugador debe apretar en un pulsador. Si acierta, se mostrará un mensaje por el “Serial monitor” y la velocidad de la secuencia de iluminación de los LEDs aumentará (y también lo hará por tanto la dificultad). En nuestro sketch los LEDs están conectados a los pines digitales 5, 6 y 7, y el pulsador al pin 8. El tiempo inicial entre encendido y encendido de los LEDs es 200 ms, pero si el jugador acierta, este tiempo disminuirá en 20 ms, hasta llegar a un tiempo entre encendidos de 10 ms, momento en el cual se volverá al tiempo inicial de 200 ms.

### **Materiales necesarios**
- Arduino-Uno.
- Pulsador.
- 3xLed.
- Resistencia.
- Protoboard.
- Cables.
### **Montaje**

![Captura de pantalla 2020-05-03 a las 1 40 42](https://user-images.githubusercontent.com/47045714/80894852-461b2080-8cdf-11ea-9d3f-98c04e56d6bc.png)

### **Esquema**

![Captura de pantalla 2020-05-03 a las 1 40 30](https://user-images.githubusercontent.com/47045714/80894854-49161100-8cdf-11ea-94ef-c0742bc9f822.png)





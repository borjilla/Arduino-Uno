### **Servo+Potenciometro**
Un potenciómetro es una resistencia de valor variable. Podemos darnos cuenta de su gran utilidad con un ejemplo muy simple: si suponemos que tenemos una fuente de alimentación que genera un determinado voltaje estable, y tenemos presente la Ley de Ohm (V = I · R), podemos ver que si aumentamos de valor la resistencia R, a igual voltaje la intensidad de corriente que pasará por el circuito inevitablemente disminuirá. Y al contrario: si disminuimos el valor de R, la corriente I aumentará. Si esta variación de R la podemos controlar nosotros a voluntad, podremos alterar como queramos la corriente que circula por un circuito. De hecho, un uso muy habitual de los potenciómetros es el de hacer de divisores de tensión progresivos, con lo que podremos, por poner un ejemplo, encender o apagar paulatinamente una luz a medida que vayamos cambiando el valor de R.
Un potenciómetro dispone físicamente de tres patillas: entre las dos de sus extremos existe siempre un valor fijo de resistencia (el máximo, de hecho), y entre cualquiera de esos extremos y la patilla central tenemos una parte de ese valor máximo. Es decir: la resistencia máxima que ofrece el potenciómetro entre sus dos extremos no es más que la suma de las resistencias entre un extremo y la patilla central (llamémosla R1), y entre la patilla central y el otro extremo (llamémosla R2). De aquí se puede pensar que un potenciómetro es equivalente a dos resistencias en serie, pero la gracia está en que en cualquier momento podremos modificar el estado de la patilla central para conseguir aumentar la resistencia de R1 (disminuyendo como consecuencia la resistencia R2, ya que el valor total máximo sí que permanece constante) o bien al contrario, para conseguir disminuir la resistencia de R1 (aumentando por lo tanto la resistencia R2 automáticamente).
La manera concreta de alterar el estado de la patilla central del potenciómetro puede variar y suele depender de su encapsulamiento físico, pero por lo general suele consistir en el desplazamiento de un cursor manipulable conectado a dicha patilla. Podemos encontrarnos potenciómetros de movimiento rotatorio como los del control de volumen de la mayoría de altavoces, o de movimiento rectilíneo como los que se utilizan en las mesas de mezcla de sonido, entre otros. En la imagen mostrada anteriormente se puede ver uno de movimiento rotatorio.

### **Materiales necesarios**
- Arduino-Uno.
- Servo.
- Potenciometro.
- Protoboard.
- Cables.
### **Montaje**
![Captura de pantalla 2020-07-02 a las 22 46 51](https://user-images.githubusercontent.com/47045714/86409839-f1355f80-bcb9-11ea-95f8-ba5130bca010.png)

### **Esquema**
![Captura de pantalla 2020-07-02 a las 23 17 31](https://user-images.githubusercontent.com/47045714/86409988-46717100-bcba-11ea-9908-f94dd5a1da08.png)


### **Movimiento del servo mediante el monitor serial**
Otro ejemplo puede ser (con el mismo circuito anterior) ordenar al servomotor que se sitúe en un ángulo determinado especificado a través del canal serie:






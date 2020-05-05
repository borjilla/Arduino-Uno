### **Pulsador+Led**
Empezaremos por un caso muy claro y directo: el encendido de un LED mientras se mantiene pulsado un botón. Para ello en realidad lo que tenemos que hacer es diseñar dos circuitos independientes: uno para el manejo del pulsador y otro para el encendido del LED. El primero lo acabamos de estudiar en el proyecto del Pulsador (elegiremos el de la configuración “pull-down”) y el segundo no es más que el primer circuito que vimos en los ejemplos de las salidas digitales. Los dos juntos tienen un aspecto como el mostrado en la siguiente figura

### **Materiales necesarios**
- Arduino-Uno.
- Pulsador.
- Led.
- 2xResistencias.
- Protoboard.
- Cables.
### **Montaje**

![Captura de pantalla 2020-05-02 a las 17 19 51](https://user-images.githubusercontent.com/47045714/80868192-2f51db00-8c99-11ea-989d-25686e235eff.png)

### **Esquema**

![Captura de pantalla 2020-05-02 a las 17 19 45](https://user-images.githubusercontent.com/47045714/80868195-324ccb80-8c99-11ea-9a1a-194f1364b685.png)

### **Explicación**
En el dibujo anterior se puede observar que hay dos cables conectados a tierra, cada uno perteneciente a uno de los dos circuitos independientes. Esto se ha hecho así por claridad, pero es más habitual unir todos los cables a tierra físicamente en un solo cable final. En todo caso, la tierra siempre ha de ser común (cosa que en este caso está garantizado porque las diferentes tierras ofrecidas por la placa Arduino están todas conectadas entre sí, tal como se aprecia en el esquema del circuito).

En el esquema eléctrico anterior se ve más claro aún que este circuito no es más que la unión de dos circuitos independientes ya vistos anteriormente. Así pues, aparentemente, cada uno de estos dos circuitos no está relacionado con el otro, pero aquí es cuando interviene nuestro sketch, el cual funcionará como un “pegamento” entre las dos partes. Nuestro programa irá leyendo el estado del pulsador constantemente y cuando detecte que este esté siendo pulsado (al recibir una señal HIGH por el pin de entrada no 8), reaccionará consecuentemente enviando una señal HIGH por el pin de salida no 4 para encender el LED.

### **Propuestas Extras**
Ahora lo que queremos es usar un botón que no se tenga que mantener pulsado para activar una salida, sino que pulsándolo una vez ya se active y pulsándolo otra vez se desactive. Pensemos por ejemplo en el botón de encendido/apagado de un mando a distancia del televisor: sería muy pesado tener que mantenerlo pulsado todo el rato para hacer funcionar el aparato.
Como ejemplo utilizaremos el mismo circuito de los códigos anteriores, con un pulsador conectado a una resistencia “pull-down” y a la entrada digital número 8 por un lado y con un LED conectado a un divisor de tensión y la salida digital número 4 por otro.

![Captura de pantalla 2020-05-02 a las 17 23 58](https://user-images.githubusercontent.com/47045714/80868283-d8003a80-8c99-11ea-99ca-8308d8ec1faf.png)
![Captura de pantalla 2020-05-02 a las 17 24 06](https://user-images.githubusercontent.com/47045714/80868285-d9316780-8c99-11ea-92a2-5e99cd96c902.png)


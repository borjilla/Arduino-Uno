### **Scketch**

### **Estructura de un programa**
Un programa diseñado para ejecutarse sobre un Arduino (un “sketch”), la estructura de un programa en Arduino puede llegar a ser muy diferente en función de la complejidad de la aplicación que queramos crear, pero como en la mayoría de lenguajes de programación esta estructura está formada por funciones, sentencias, bucles y otros elementos que conforman la estructura de programa.

### **Variables**
La sección de declaraciones de **variables globales**: ubicada directamente al principio del sketch. Las variables son elementos donde se almacenan valores numéricos que serán usados por el programa. Como su nombre indica, las variables van a cambiar de valor con la evolución del programa y nos van a permitir crear la lógica del programa en función de estos cambios.

> int variable_entrada = 0; //declara una variable y le asigna el valor 0

> variable_entrada = analogRead(2); //la variable toma el valor de la entrada analógica 2

![Captura de pantalla 2020-05-03 a las 2 00 51](https://user-images.githubusercontent.com/47045714/80895153-fdb13200-8ce1-11ea-8da0-9f61114af652.png)

### **Void setup()**
La sección llamada **void setup()**: delimitada por llaves de apertura y cierre.Las instrucciones escritas dentro de la sección “void setup()” se ejecutan una única vez, en el momento de encender (o resetear) la placa Arduino.
### **Void loop()**
La sección llamada **void loop()**: delimitada por llaves de apertura y cierre. Las instrucciones escritas dentro de la sección “void loop()” se ejecutan justo después de las de la sección “void setup()” infinitas veces hasta que la placa se apague (o se resetee). Es decir, el contenido de “void loop()” se ejecuta desde la 1a instrucción hasta la última, para seguidamente volver a ejecutarse desde la 1a instrucción hasta la última, para seguidamente ejecutarse desde la 1a instrucción hasta la última, y así una y otra vez.

Las llaves definen el principio y el final de un bloque de instrucciones. Se usan para delimitar el inicio y fin de funciones como setup() o para delimitar el alcance de los bucles y condicionales del programa.

### **Condicionales**
Los condicionales son elementos que chequean un estado o condición y si esta condición se cumple se pasa a ejecutar las sentencias englobadas dentro de la condición.

`If (si...)`

If es un estamento que se utiliza para comprobar si una determinada condición se cumple. Si la condición se cumple, se pasará a ejecutar las sentencias encerradas dentro del bloque if, si no se cumple la condición, el programa saltará este bloque sin ejecutar ninguna instrucción.

![Captura de pantalla 2020-05-03 a las 2 07 16](https://user-images.githubusercontent.com/47045714/80895232-d313a900-8ce2-11ea-94cf-2db5235065aa.png)

If... else funciona de igual forma que if, pero añade la posibilidad de que la condición no se cumpla,pasando a ejecutar las instrucciones encerradas dentro de else.

![Captura de pantalla 2020-05-03 a las 2 06 58](https://user-images.githubusercontent.com/47045714/80895220-cbec9b00-8ce2-11ea-827e-5cb43a90074c.png)

Este condicional puede ir precedido de otras estructuras condicionales del mismo tipo, anidando unas dentro de otras y haciendo que sean mutuamente excluyentes.

### **Bucles**
Los bucles son elementos que hacen que el programa entre en un ciclo de repetición mientras se cumplan las condiciones del bucle.

**For**
El bucle for se usa para repetir un bloque de sentencias un número determinado de veces. Cada vez que se terminan de ejecutar las sentencias encerradas dentro del bucle, se comprobará la condición inicial, repitiéndose el bucle mientras se cumpla dicha condición.

![Captura de pantalla 2020-05-03 a las 2 08 45](https://user-images.githubusercontent.com/47045714/80895258-0bb38280-8ce3-11ea-9788-bef48ef790af.png)

El buche for está formado por 3 partes, la inicialización, la condición del bucle y una expresión (la expresión no es necesaria o puede ponerse dentro de las sentencias del bucle).

![Captura de pantalla 2020-05-03 a las 2 09 04](https://user-images.githubusercontent.com/47045714/80895262-13732700-8ce3-11ea-93b2-4387a68d231b.png)

**While**
El bucle while es un bucle que se repetirá constantemente mientras se cumpla la expresión del bucle. Dentro de la expresión del bucle se pueden usar variables que cambien dentro del propio bucle o que tomen el valor de alguna de las entradas de Arduino que podemos tener asociadas a sensores u otros elementos.

![Captura de pantalla 2020-05-03 a las 2 09 48](https://user-images.githubusercontent.com/47045714/80895268-2ede3200-8ce3-11ea-9b69-619b3cd4348b.png)

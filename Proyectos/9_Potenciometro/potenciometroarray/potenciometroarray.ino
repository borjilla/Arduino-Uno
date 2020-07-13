const int numElementos = 10; //Número de elementos del array
int lecturas[numElementos];  //Aquí se guardan las lecturas
int index = 0;   //Índice para irse moviendo por los elementos
 /*Valor de la suma de los 10 valores
 que haya en un momento dado en el array*/
int total = 0;
int media = 0;  // Es igual a total/numElementos
void setup(){
      Serial.begin(9600);
      //Inicializo todos los elementos del array a 0
      for (int i = 0; i < numElementos; i++){
          lecturas[i] = 0;
      }
}
void loop() {
/*Quito de la suma total el valor que será sobrescrito enseguida por el nuevo valor obtenido. De esta forma, se mantiene tan solo la suma de los valores que en este momento estén dentro del array */
     total= total - lecturas[index];
     lecturas[index] = analogRead(2);
     //Añado el valor recién leído a la suma total
     total= total + lecturas[index];
/*Avanzo a la siguiente posición del array para
 sobrescribir en esta nueva posición el próximo valor leído*/
     index = index + 1;
     //Si estamos en el final del array...
     if (index >= numElementos){
           //...vuelvo al principio para sobrescribir por allí
          index = 0;
     }
     //Calculo la media de los 10 valores actuales
     media = total / numElementos;
     Serial.println(media);
     delay(1);//Me espero para leer de nuevo (por estabilidad}
}

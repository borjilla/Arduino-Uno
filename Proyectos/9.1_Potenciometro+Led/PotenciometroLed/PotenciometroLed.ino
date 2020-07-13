int valorPot=0;
void setup(){
     pinMode(9,OUTPUT);
}
void loop(){
     valorPot=analogRead(2);
/*Los valores de analogRead() van desde 0 a 1023 y los valores de analogWrite van desde 0 a 255, por eso reajustamos el valor leído para poderlo reenviar. En este caso particular, como los mínimos de ambos rangos son 0, en vez de map() podríamos haber escrito una simple regla de proporcionalidad, mediante la fórmula valorPot=valorPot*(255.0/1023.0), o dicho de otra forma: dividiendo el valor original entre 4.0 (el 4 ha de ser un valor “float” para que el resultado no se trunque!, de ahí el 0 decimal).*/
     valorPot=map(valorPot,0,1023,0,255);
     analogWrite(9,valorPot);
//Espero un rato para que la señal de analogWrite se mantenga
     delay(100);
}

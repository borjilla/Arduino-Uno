int tono = 10000; //Nota inicial. Es el período de la onda
void setup (){
     pinMode (8, OUTPUT);
     for (tono=10000; tono>=100; tono=tono-10){
         digitalWrite (8, HIGH);
         delayMicroseconds (tono/2);
         digitalWrite (8, LOW);
         delayMicroseconds (tono/2);
} }
void loop (){}

/*Al ejecutar el código anterior notarás que el zumbador 
 permanece mucho rato emitiendo sonidos graves (parece que 
 le cuesta “avanzar”) para finalmente “acelerar” y emitir 
 los sonidos más agudos en muy poco tiempo. Podemos 
 mitigar este efecto, y hacer que el sonido transcurra 
 desde los sonidos graves hasta los sonidos agudos de 
 una forma más equilibrada realizando dos cambios en el 
 código anterior. El primer cambio es convertir la 
 variable “tono” en una variable de tipo “float”. 
 El segundo cambio es sustituir el decremento actual 
 del bucle “for” (es decir, tono=tono-10) por otro tipo 
 de decremento; concretamente, cambiar la resta por una 
 división. Si hacemos esto (es decir, si escribimos por 
 ejemplo tono=tono*0.97) controlaremos mejor la “velocidad”
 de la sirena. Podemos cambiar este factor 0,97 por otro, 
 como 0,99 o 0,93 para observar qué ocurre.
 */

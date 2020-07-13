int tono = 1000; //Nota inicial. Es el período de la onda
void setup (){
     pinMode (8, OUTPUT);
}
void loop (){
     digitalWrite (8, HIGH);
     delayMicroseconds (tono/2);
     digitalWrite (8, LOW);
     delayMicroseconds (tono/2);
     tono=analogRead(0);
     tono=map(tono,0,1023,1000,5000);
}

/*Lo que hacemos en el código anterior es obtener la 
 lectura analógica del potenciómetro (que va de 0 a 1023) 
 y utilizarla para definir el tiempo que duran los 
 pulsos HIGH y LOW enviados al zumbador. Cuanto menos 
 duren, más agudo será el sonido. Fijémonos que el 
 valor leído primero se mapea para que esté dentro de 
 un rango entre 1000 y 5000 (aunque perfectamente se 
 puede elegir otro rango) y que la duración de los 
 pulsos es “tono/2” porque el valor de “tono” representa 
 el período total de la onda cuadrada (es decir, un 
 pulso HIGH más un pulso LOW). Si hacemos los
 cálculos de párrafos anteriores, veremos que con el 
 período de la onda cuadrada establecido entre 1000 y 5000,
 este sketch puede emitir sonidos entre 1 KHz y 200 Hz.
 
Si queremos variar el volumen del sonido emitido además de
su frecuencia, deberemos de sustituir el divisor de tensión
conectado en serie al zumbador por un segundo potenciómetro.
Concretamente, deberíamos conectar un extremo de ese nuevo 
potenciómetro al pin-hembra digital del Arduino configurado
como salida por donde se emite el sonido, el otro extremo 
del potenciómetro a tierra y su patilla central a un 
terminal del zumbador. De esta manera, podremos regular 
la intensidad de corriente recibida por el zumbador y, 
por tanto, el volumen del sonido emitido.
Otra manera de regular el volumen podría ser conectando 
el zumbador a una salida analógica de la placa en vez de 
a una digital. No obstante, de esta manera no podemos 
alterar la frecuencia de la onda emitida (ya que en un 
pin PWM esta es constante a 490 Hz), por lo que el 
sonido que surge no es especialmente agradable.
 */

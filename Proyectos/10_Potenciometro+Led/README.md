### **Potenciometro+Led**
Ya sabemos obtener un dato (de hasta 1024 valores posibles diferentes) proporcional al voltaje analógico recibido. La gracia está ahora en utilizar este valor de tensión para aplicársela a los dispositivos conectados a las salidas PWM de la placa Arduino. De esta manera, podremos variar gradualmente el brillo de un LED, la velocidad de un motor, la frecuencia de un sonido emitido por un zumbador, etc., según les enviemos más o menos voltaje.
Por suerte, tanto el rango de voltaje analógico leído de entrada es de 5 V (porque hemos alimentado el potenciómetro con la propia placa) como también lo es el rango del voltaje de salida ofrecidos por los pines-hembra de Arduino, así que en este sentido no hay que preocuparse de que los valores leídos por un lado no sean eléctricamente seguros para ser utilizados en el otro. No obstante, hay que tener en cuenta que los valores leídos pueden estar entre 0 y 1024 (como ya hemos dicho) pero los valores PWM recordemos que solo pueden estar entre 0 y 255. Esto es muy importante, porque nos obliga en nuestro sketch a hacer un “mapeo” (normalmente con map()) de los valores obtenidos para que se ajusten a este nuevo rango cuatro veces más pequeño que el original.


### **Materiales necesarios**
- Arduino-Uno.
- Potenciometro.
- Led.
- Resistencia.
- Protoboard.
- Cables.

### **Montaje**
![Captura de pantalla 2020-07-13 a las 21 13 18](https://user-images.githubusercontent.com/47045714/87343855-cc5caa00-c54d-11ea-8d6d-2e3eb3856fd6.png)

### **Esquemático**
![Captura de pantalla 2020-07-13 a las 21 13 29](https://user-images.githubusercontent.com/47045714/87343894-daaac600-c54d-11ea-984a-41fcff50a7d9.png)




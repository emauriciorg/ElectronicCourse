/* El numro del pin coincide
con los pines digitales de la
tarjeta ARDUINO R3*/

int LED_pin = 8; 

/*La funcion setup es la funcion de configuracion
de la tarjeta, esta solo es llamada una vez*/

void setup() {
  /*Esta linea configura un pin
  de un microcontrolador como
  salida. Quiere decir que el 
  microcontrolador controlara
  el estado de dicho pin (voltage
  alto o bajo)
  */
  pinMode {LED_pin, OUPUT};
  
}

void loop() {
  // put your main code here, to run repeatedly:

  DigitalWrite(LED_pin,HIGH);
  delay(1000);
  DigitalWrite(LED_pin,LOW);
  delay(1000);
  
}

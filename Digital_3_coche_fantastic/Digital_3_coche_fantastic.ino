/*****************************************************************
**                                                              **
**                       TÍTOL:Cicle Led coche fantastic        **
**               Sequencia LEDS llums del coche fantastics      **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:06/03/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************



//*********************** SETUP **********************************

void setup() {             // configura el final de la salida
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
}


//*********************** LOOP ***********************************


void loop () {             // inicia el bucle del programa

digitalWrite(5, HIGH);  // Indica la sortida digital del LED
delay(20);                // ms que estara ences
digitalWrite(5, LOW);
delay(20);                // ms que estara apagat


digitalWrite(6, HIGH);
delay(20);
digitalWrite(6,LOW);
delay(20);

digitalWrite(7, HIGH);
delay(20);
digitalWrite(7, LOW);
delay(20);

digitalWrite(8, HIGH);
delay(20);
digitalWrite(8, LOW);
delay(20);

digitalWrite(9, HIGH);
delay(20);
digitalWrite(9, LOW);
delay(20);

digitalWrite(10, HIGH);
delay(20);
digitalWrite(10, LOW);
delay(20);

digitalWrite(11, HIGH);
delay(20);
digitalWrite(11, LOW);
delay(20);

digitalWrite(12, HIGH);
delay(20);
digitalWrite(12, LOW);
delay(20);

digitalWrite(11, HIGH);
delay(20);
digitalWrite(11, LOW);
delay(20);

digitalWrite(10, HIGH);
delay(20);
digitalWrite(10, LOW);
delay(20);

digitalWrite(9, HIGH);
delay(20);
digitalWrite(9, LOW);
delay(20);

digitalWrite(8, HIGH);
delay(20);
digitalWrite(8, LOW);
delay(20);

digitalWrite(7, HIGH);
delay(20);
digitalWrite(7, LOW);
delay(20);

digitalWrite(6, HIGH);
delay(20);
digitalWrite(6, LOW);
delay(20);
}


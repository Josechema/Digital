/*****************************************************************
**                                                              **
**                       TÍTOL:Cicle Led intercalacio           **
**               Encendre 8 Leds amb intercalacio               **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:13/03/2017     **
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

digitalWrite(6, HIGH);
digitalWrite(8, HIGH);
digitalWrite(10, HIGH);
digitalWrite(12, HIGH);     // Indica la sortida digital del LED
delay(500);                // ms que estara ences
digitalWrite(12, LOW);      // indica la sortida digital del LED
digitalWrite(10, LOW);
digitalWrite(8, LOW);
digitalWrite(6, LOW);
delay(500);                // ms que estara apagat

digitalWrite(5, HIGH);
digitalWrite(7, HIGH);
digitalWrite(9, HIGH);
digitalWrite(11, HIGH);
delay(500);
digitalWrite(5, LOW);
digitalWrite(7, LOW);
digitalWrite(9, LOW);
digitalWrite(11, LOW);
delay(500);
}



//*********************** FUNCIONS *******************************

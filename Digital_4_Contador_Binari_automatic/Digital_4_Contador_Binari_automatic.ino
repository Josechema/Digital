/*****************************************************************
**                                                              **
**                       TÍTOL:Cicle Led binari                 **
**               Contador automatic Binari de 0 a 15            **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:06/03/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************



//*********************** SETUP **********************************

void setup() {             // configura el final de la salida

pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
}


//*********************** LOOP ***********************************


void loop () {             // inicia el bucle del programa

delay(1000);           // 0
delay(500);

digitalWrite(8, HIGH);  // 1
delay(1000);                
digitalWrite(8, LOW);
delay(500);                

digitalWrite(7, HIGH); // 2
delay(1000);
digitalWrite(7, LOW);
delay(500);

digitalWrite(8, HIGH);
digitalWrite(7, HIGH);// 3
delay(1000);
digitalWrite(8, LOW);
digitalWrite(7, LOW);
delay(500);

digitalWrite(6, HIGH); // 4
delay(1000);
digitalWrite(6, LOW);
delay(500);

digitalWrite(8, HIGH); // 5
digitalWrite(6, HIGH);
delay(1000);
digitalWrite(8, LOW);
digitalWrite(6, LOW);
delay(500);

digitalWrite(6, HIGH); // 6
digitalWrite(7, HIGH);
delay(1000);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(500);

digitalWrite(6, HIGH); // 7
digitalWrite(7, HIGH);
digitalWrite(8, HIGH);
delay(1000);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
delay(500);

digitalWrite(5, HIGH); // 8
delay(1000);
digitalWrite(5, LOW);
delay(500);

digitalWrite(5, HIGH); // 9
digitalWrite(8, HIGH);
delay(1000);
digitalWrite(5, LOW);
digitalWrite(8, LOW);
delay(500);

digitalWrite(5, HIGH); // 10
digitalWrite(7, HIGH);
delay(1000);
digitalWrite(5, LOW);
digitalWrite(7, LOW);
delay(500);

digitalWrite(8, HIGH); // 11
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
delay(1000);
digitalWrite(8, LOW);
digitalWrite(7, LOW);
digitalWrite(5, LOW);
delay(500);

digitalWrite(5, HIGH); // 12
digitalWrite(6, HIGH);
delay(1000);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
delay(500);

digitalWrite(8, HIGH); // 13
digitalWrite(6, HIGH);
digitalWrite(5, HIGH);
delay(1000);
digitalWrite(8, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
delay(500);

digitalWrite(6, HIGH); // 14
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
delay(1000);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(5, LOW);
delay(500);

digitalWrite(8, HIGH); // 15
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
delay(1000);
digitalWrite(8, LOW);
digitalWrite(7, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
delay(500);
}

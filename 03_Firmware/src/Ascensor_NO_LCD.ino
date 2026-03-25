#include <Servo.h>

Servo servo1;

int sensorP1 = 2;   // Final de carrera piso 1
int sensorP2 = A7;  // Fototransistor piso 2
int sensorP3 = 4;   // Final de carrera piso 3
int vel = 100;      // Velocidad servo

int pul_0 = 6;  //pulsador Piso 1
int pul_1 = 7;  //pulsador Piso 2
int pul_2 = 8;  //pulsador Piso 3

int pul[] = { 6, 7, 8 };
int vpul[] = { 1, 1, 1 };  // ninguno pulsado
int actual = 0;            //piso actual: deconocido

int sen[] = { 2, A7, 4 };
int vsen[] = { 1, 580, 1 };  // ascensor no detectado

int detener = 90;  // detener servo
int subir = 45;    // girar para subir servo
int bajar = 135;   // girar para bajar servo

void setup() {
  // pullup para pulsadores
  pinMode(pul[0], INPUT_PULLUP);
  pinMode(pul[1], INPUT_PULLUP);
  pinMode(pul[2], INPUT_PULLUP);

  // pullup para sensores
  pinMode(sensorP1, INPUT_PULLUP);
  pinMode(sensorP2, INPUT);
  pinMode(sensorP3, INPUT_PULLUP);

  pinMode(3, OUTPUT);  //pin para Servo
  pinMode(5, OUTPUT);  //pin para Buzzer

  pinMode(A1, OUTPUT);  // pin para Led Verde
  pinMode(A2, OUTPUT);  // pin para Led Amarillo
  pinMode(A3, OUTPUT);  // pin para Led Rojo

  servo1.attach(3);
  servo1.write(90);  //No girar servo

    //identificar en que piso se encuentra la cabina actualmente
  vsen[0] = digitalRead(sen[0]);  // Leer final de carrera primer piso (1 open)
  if (vsen[0] == 0) {
    actual = 1;
    digitalWrite(A1, HIGH);
  }
  vsen[1] = analogRead(sen[1]);  // Leer IRs segundo piso (567 open, 508 close UMBRAL:545) Si este sensor no funciona debes cambiar el umbral
  if (vsen[1] < 545) {           // umbral
    actual = 2;
    digitalWrite(A2, HIGH);
  }
  vsen[2] = digitalRead(sen[2]);  // // Leer final de carrera tercer piso (1 open)
  if (vsen[2] == 0) {
    actual = 3;
    digitalWrite(A3, HIGH);
  }

}

void loop() {

  //Leer pulsadores
  vpul[0] = digitalRead(pul[0]);
  vpul[1] = digitalRead(pul[1]);
  vpul[2] = digitalRead(pul[2]);

    //Leer sensores
  vsen[0] = digitalRead(sen[0]);  // 1 open
  vsen[1] = analogRead(sen[1]);   // 567 open, 508 close UMBRAL:530
  vsen[2] = digitalRead(sen[2]);  // 1 open

    // Encender Led del piso actual
  if (vsen[0] == 0) {
    actual = 1;
    digitalWrite(A1, HIGH);
    digitalWrite(A2, LOW);
    digitalWrite(A3, LOW);
  }
  if (vsen[1] < 545) {
    actual = 2;
    digitalWrite(A1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, LOW);
  }
  if (vsen[2] == 0) {
    actual = 3;
    digitalWrite(A1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A3, HIGH);
  }
  
  
  Serial.print("Pulsado: ");
  Serial.print(vpul[0]);
  Serial.print(" ");
  Serial.print(vpul[1]);
  Serial.print(" ");
  Serial.print(vpul[2]);
  Serial.println(" ");

  Serial.print("Sensores: ");
  Serial.print(vsen[0]);
  Serial.print(" ");
  Serial.print(vsen[1]);
  Serial.print(" ");
  Serial.print(vsen[2]);
  Serial.println(" ");

  Serial.print("Piso Actual: ");
  Serial.println(actual);

  delay(100);


  //ir a piso P1 --------------------------------------------------------------------------------------------------
  if (vpul[0] == 0) {
    digitalWrite(A1, HIGH);  //Indicador Piso 1
    lcd.setCursor(13, 0);
    lcd.print("P1");
    switch (actual) {
      case 1:
        digitalWrite(A1, HIGH);  //Indicador Piso 1
        digitalWrite(A2, LOW);   //Indicador Piso 2
        digitalWrite(A3, LOW);   //Indicador Piso 3
        tone(5, 450, 250);
        delay(100);
        servo1.write(detener);  // Detener
        break;
      
      case 2:
        digitalWrite(A1, LOW);   //Indicador Piso 1
        digitalWrite(A2, HIGH);  //Indicador Piso 2
        digitalWrite(A3, LOW);   //Indicador Piso 3
        while (vsen[0] == 1) {   //

          digitalWrite(A1, HIGH);  //Indicador Piso 1
          delay(100);
          servo1.write(bajar);  // servo sentido Horario: Bajar
          vsen[0] = digitalRead(sen[0]);
          digitalWrite(A1, LOW);  //Indicador Piso 1
          delay(100);
        }
        servo1.write(detener);
        digitalWrite(A1, HIGH);  //Indicador Piso 1
        actual = 1;
        break;

      case 3:
        digitalWrite(A1, LOW);   //Indicador Piso 1
        digitalWrite(A2, LOW);   //Indicador Piso 2
        digitalWrite(A3, HIGH);  //Indicador Piso 3
        while (vsen[0] == 1) {
          digitalWrite(A1, HIGH);  //Indicador Piso 1
          delay(100);
          servo1.write(bajar);  // servo sentido Horario: Bajar
          vsen[0] = digitalRead(sen[0]);
          digitalWrite(A1, LOW);  //Indicador Piso 1
          delay(100);
        }
        servo1.write(detener);
        digitalWrite(A1, HIGH);  //Indicador Piso 1
        actual = 1;
        break;
    }
    delay(100);
}

  //ir a piso P3 --------------------------------------------------------------------------------------------------
  else if (vpul[2] == 0) {
    digitalWrite(A3, HIGH);  //Indicador Piso 3

    switch (actual) {
      case 3:
        digitalWrite(A1, LOW);   //Indicador Piso 1
        digitalWrite(A2, LOW);   //Indicador Piso 2
        digitalWrite(A3, HIGH);  //Indicador Piso 3

        tone(5, 450, 250);
        delay(100);
        servo1.write(detener);  // Detener

        break;

      case 1:
        digitalWrite(A1, LOW);   //Indicador Piso 1
        digitalWrite(A2, LOW);   //Indicador Piso 2
        digitalWrite(A3, HIGH);  //Indicador Piso 3
        while (vsen[2] == 1) {   //

          digitalWrite(A3, HIGH);  //Indicador Piso 3
          delay(100);
          servo1.write(subir);  // Horario: subir

          vsen[2] = digitalRead(sen[2]);
          digitalWrite(A3, LOW);  //Indicador Piso 3
          delay(100);
        }
        servo1.write(detener);
        digitalWrite(A3, HIGH);  //Indicador Piso 3
        actual = 3;
        break;
      
      case 2:
        digitalWrite(A1, LOW);   //Indicador Piso 1
        digitalWrite(A2, LOW);   //Indicador Piso 2
        digitalWrite(A3, HIGH);  //Indicador Piso 3
        while (vsen[2] == 1) {

          digitalWrite(A3, HIGH);  //Indicador Piso 3
          delay(100);
          servo1.write(subir);  // Horario: Subir

          vsen[2] = digitalRead(sen[2]);
          digitalWrite(A3, LOW);  //Indicador Piso 3
          delay(100);
        }
        servo1.write(detener);
        digitalWrite(A3, HIGH);  //Indicador Piso 3
        actual = 3;
        break;
    }
    delay(100);
  }

    else {
    digitalWrite(13, LOW);
    digitalWrite(3, LOW);

  }
}
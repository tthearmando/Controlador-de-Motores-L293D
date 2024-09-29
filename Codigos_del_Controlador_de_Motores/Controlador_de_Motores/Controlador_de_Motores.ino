/*
Hecho por JUAN ARMANDO

Sigueme en mis redes sociales

  @JUANARMMG
*/


#include <Arduino.h>

const int IN1 = 9;
const int IN2 = 10;
const int ledVerde = 5;
const int ledAzul = 6;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
}

void loop() {
  // Girar a la izquierda
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAzul, LOW);
  delay(2000);

  // Girar a la derecha
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAzul, HIGH);
  delay(2000);
}

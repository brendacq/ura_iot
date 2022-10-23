#include "MotorControl.h"

MotorControl::MotorControl(byte esquerdoA, byte esquerdoB, byte direitoA, byte direitoB) {
  this->esquerdoA = esquerdoA;
  this->esquerdoB = esquerdoB;
  this->direitoA = direitoA;
  this->direitoB = direitoB;

  config();
}

void MotorControl::config() {
  pinMode(esquerdoA, OUTPUT);
  pinMode(esquerdoB, OUTPUT);
  pinMode(direitoA, OUTPUT);
  pinMode(direitoB, OUTPUT);
}

void MotorControl::frente() {
  digitalWrite(esquerdoA, LOW);
  digitalWrite(esquerdoB, HIGH);
  digitalWrite(direitoA, LOW);
  digitalWrite(direitoB, HIGH);
  delay(800);
  parar();
}

void MotorControl::esquerda() {
  digitalWrite(esquerdoA, HIGH);
  digitalWrite(esquerdoB, LOW);
  digitalWrite(direitoA, LOW);
  digitalWrite(direitoB, HIGH);
  delay(500);
  parar();
}

void MotorControl::direita() {
  digitalWrite(esquerdoA, LOW);
  digitalWrite(esquerdoB, HIGH);
  digitalWrite(direitoA, HIGH);
  digitalWrite(direitoB, LOW);
  delay(500);
  parar();
}

void MotorControl::re() {
  digitalWrite(esquerdoA, HIGH);
  digitalWrite(esquerdoB, LOW);
  digitalWrite(direitoA, HIGH);
  digitalWrite(direitoB, LOW);
  delay(800);
  parar();
}

void MotorControl::parar() {
  digitalWrite(esquerdoA, HIGH);
  digitalWrite(esquerdoB, HIGH);
  digitalWrite(direitoA, HIGH);
  digitalWrite(direitoB, HIGH);
}
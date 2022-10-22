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
}

void MotorControl::esquerda() {
  digitalWrite(esquerdoA, HIGH);
  digitalWrite(esquerdoB, LOW);
  digitalWrite(direitoA, LOW);
  digitalWrite(direitoB, HIGH);
}

void MotorControl::direita() {
  digitalWrite(esquerdoA, LOW);
  digitalWrite(esquerdoB, HIGH);
  digitalWrite(direitoA, HIGH);
  digitalWrite(direitoB, LOW);
}

void MotorControl::re() {
  digitalWrite(esquerdoA, HIGH);
  digitalWrite(esquerdoB, LOW);
  digitalWrite(direitoA, HIGH);
  digitalWrite(direitoB, LOW);
}

void MotorControl::parar() {
  digitalWrite(esquerdoA, HIGH);
  digitalWrite(esquerdoB, HIGH);
  digitalWrite(direitoA, HIGH);
  digitalWrite(direitoB, HIGH);
}
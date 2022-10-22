#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

#include <Arduino.h>

class MotorControl{
  private:
    byte esquerdoA;
    byte esquerdoB;
    byte direitoA;
    byte direitoB;

  public:
    MotorControl(byte esquerdoA, byte esquerdoB, byte direitoA, byte direitoB);
    void config();
    void frente();
    void esquerda();
    void direita();
    void re();
    void parar();
};

#endif
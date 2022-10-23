#include <Ultrasonic.h>
#include "MotorControl.h"

byte triggerPin = 22;
byte echoPin = 23;

// MOTOR ESQUERDO
byte motorA_1A = 27;
byte motorA_1B = 14;

//MOTOR DIREITO
byte motorB_1A = 12;
byte motorB_1B = 13;

Ultrasonic sonar(triggerPin, echoPin);
MotorControl andar(motorA_1A, motorA_1B, motorB_1A, motorB_1B);

void setup() {

}

void loop() {
  // unsigned int distancia = sonar.read(CM);

}
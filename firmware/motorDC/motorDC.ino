#include "MotorControl.h"

/* -----MOTORES----- */
// A1-A - motor esquerdo
const int ESQUERDO_A_PIN = 12;
// A1-B - motor esquerdo
const int ESQUERDO_B_PIN = 13;

// B1-B - motor direito
const int DIREITO_B_PIN = 23;
// B1-A motor direito
const int DIREITO_A_PIN = 5;

MotorControl move(ESQUERDO_A_PIN, ESQUERDO_B_PIN, DIREITO_B_PIN, DIREITO_A_PIN);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  move.forward();
  delay(1500);
  move.backwards();
  delay(1500);
}

// topicos --------------- MUDAR PARA PT
// "URA07/sensor/ultrasonic"
// "URA07/motor/forward" 

// JAVASCRIPT
// `${roboId}/sensor/ultrasonic`
// `${roboId}/motor/${direcao}`
// - roboId : inserido pelo usuário
// - sensor|motor : inserido no proprio serviço/regra de negocio
// - direcao : inserido de acordo com o botão pressionado
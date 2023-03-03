#include <Ultrasonic.h>

byte echo = 15;
byte trigger = 2;

Ultrasonic ultrasonic(trigger, echo);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned int distance = ultrasonic.read(CM);

  Serial.print("Distancia: ");
  Serial.println(distance);
  delay(500);
}

#include <Servo.h>
#include "Servo_Motor.h"

#define LEFT_SERVO_PIN 9
#define RIGHT_SERVO_PIN 10

ServoMotor DDR(LEFT_SERVO_PIN, RIGHT_SERVO_PIN);

void setup() {
  DDR.init();
}

void loop() {
  DDR.moveForward();
  delay(2000);
  DDR.turnLeft();
  delay(1000);
  DDR.moveBackward();
  delay(2000);
  DDR.stop();
  delay(1000);
}






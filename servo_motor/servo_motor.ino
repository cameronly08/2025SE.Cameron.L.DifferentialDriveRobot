#include <Servo.h>
#include "servo_motor.h"

#define LEFT_SERVO_PIN 9
#define RIGHT_SERVO_PIN 10

ServoMotor DDR(LEFT_SERVO_PIN, RIGHT_SERVO_PIN);

void setup() {
  DDR.init(); // Initialize the servo motors
}

void loop() {
  DDR.moveForward();
  delay(2000); // Move forward for 2 seconds

  DDR.turnLeft();
  delay(1000); // Turn left for 1 second

  DDR.moveBackward();
  delay(2000); // Move backward for 2 seconds

  DDR.turnRight();
  delay(1000); // Turn right for 1 second

  DDR.stop();
  delay(2000); // Stop for 2 seconds

  DDR.setSpeedFast(); // Set speed to fast
  DDR.moveForward();
  delay(2000); // Move forward fast for 2 seconds

  DDR.setSpeedSlow(); // Set speed to slow
  DDR.moveBackward();
  delay(2000); // Move backward slow for 2 seconds
}






#include "Car_Controller.h"

CarController::CarController(byte leftSensorPin, byte rightSensorPin, byte leftMotorPin, byte rightMotorPin)
  : lineFinder(leftSensorPin, rightSensorPin), 
    motor(leftMotorPin, rightMotorPin),
    lastDirectionWasLeft(false), 
    lastLineTime(0) 
{
}

void CarController::init() {
  lineFinder.init();
  ledArray.begin();
  motor.init();
  lastLineTime = millis();
}

void CarController::update() {
  followLine();
  // add ultrasonic method here eg ::avoidObstacle
}

void CarController::followLine() {
    bool leftOnLine = lineFinder.isLeftSensorOnLine();
    bool rightOnLine = lineFinder.isRightSensorOnLine();

    if (leftOnLine && rightOnLine) {
        ledArray.displayLike();
        motor.setSpeed(100, 80);
        lastLineTime = millis();
        // Serial.println("Moving Forward");
        delay(200);
    } else if (!leftOnLine && rightOnLine) {
        ledArray.displayLike();
        motor.setSpeed(110, 70);
        lastDirectionWasLeft = false;
        lastLineTime = millis();
        // Serial.println("Turning Right");
        delay(200);
    } else if (leftOnLine && !rightOnLine) {
        ledArray.displayLike();
        motor.setSpeed(70, 110);
        lastDirectionWasLeft = true;
        lastLineTime = millis();
        // Serial.println("Turning Left");
        delay(200);
    } else {
        ledArray.displayDanger();
        if (millis() - lastLineTime > 500) {  // If line lost for more than 0.5 seconds
            if (lastDirectionWasLeft) {
                motor.setSpeed(110, 70);  // Continue turning left
            } else {
                motor.setSpeed(90, 110);   // Continue turning right
            }
        } else { 
            motor.stop();
        }
    }
    delay(20);
}

void CarController::turnLeft() {
  motor.turnLeft();
}

void CarController::turnRight() {
  motor.turnRight();
}

void CarController::stop() {
  motor.stop();
}
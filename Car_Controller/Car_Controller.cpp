#include "Car_Controller.h"

CarController::CarController(byte leftSensorPin, byte rightSensorPin, byte leftMotorPin, byte rightMotorPin)
  : lineFinder(leftSensorPin, rightSensorPin), motor(leftMotorPin, rightMotorPin) {
  }

void CarController::init() {
  lineFinder.init();
  ledArray.begin();
  motor.init();

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
      motor.moveForward();
    } else if (!leftOnLine && rightOnLine) {
      ledArray.displayLike();
      turnRight();
    } else if (leftOnLine && !rightOnLine) {
      ledArray.displayLike();
      turnLeft();
    } else {
      ledArray.displayDanger();
      stop();
    }
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

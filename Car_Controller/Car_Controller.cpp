#include "Car_Controller.h"

CarController::CarController(byte leftSensorPin, byte rightSensorPin, byte leftMotorPin, byte rightMotorPin)
  : lineFinder(leftSensorPin, rightSensorPin), Servo(leftMotorPin, rightMotorPin) {
  }

void CarController::init() {
  lineFinder.init();
  ledArray.begin();
  Servo.init();

}

void CarController::update() {
  followLine();
}

void CarController::followLine() {
  bool leftOnLine = lineFinder.isLeftSensorOnLine();
  bool rightOnLine = lineFinder.isRightSensorOnLine();

  if (leftOnLine && rightOnLine) {
    ledArray.displayLike();
    Servo.moveForward();
  } else if (!leftOnLine && rightOnLine) {
    ledArray.displayDanger();
    turnRight();
  } else if (leftOnLine && !rightOnLine) {
    ledArray.displayDanger();
    turnLeft();
  } else {
    stop();
  }
}

void CarController::turnLeft() {
  Servo.turnLeft();
}

void CarController::turnRight() {
  Servo.turnRight();
}

void CarController::stop() {
  Servo.stop();
}

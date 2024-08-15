#include "Car_Controller.h"

CarController::CarController(LineFinder& lineFinder, LEDArray& ledArray, ServoMotor& motors)
  : lineFinder(lineFinder), ledArray(ledArray), motors(motors) {
}

void CarController::init() {
}

void CarController::update() {
  followLine();
}

void CarController::followLine() {
  bool leftOnLine = lineFinder.isLeftSensorOnLine();
  bool rightOnLine = lineFinder.isRightSensorOnLine();

  if (leftOnLine && rightOnLine) {
    ledArray.displayLike();
    motors.moveForward();
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
  motors.turnLeft();
}

void CarController::turnRight() {
  motors.turnRight();
}

void CarController::stop() {
  motors.stop();
}

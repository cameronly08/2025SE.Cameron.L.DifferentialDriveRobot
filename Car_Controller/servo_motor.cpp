#include "Servo_Motor.h"

ServoMotor::ServoMotor(byte leftPin, byte rightPin) {
  this->leftPin = leftPin;
  this->rightPin = rightPin;
}

void ServoMotor::init() {
  leftMotor.attach(leftPin, 700, 2300);
  rightMotor.attach(rightPin, 700, 2300);
  setSpeed(SLOW_FORWARD, SLOW_FORWARD);
}

void ServoMotor::setSpeed(int leftSpeed, int rightSpeed) {
    leftMotor.writeMicroseconds(leftSpeed);
    rightMotor.writeMicroseconds(rightSpeed);
  }

void ServoMotor::moveForward() {
  setSpeed(1600, 1495);
}

void ServoMotor::moveBackward() {
  setSpeed(1495, 1600);
}

void ServoMotor::turnLeft() {
  setSpeed(1500, 1450);
}

void ServoMotor::turnRight() {
  setSpeed(1600, 1500);
}

void ServoMotor::stop() {
  setSpeed(1500, 1500);
}

void ServoMotor::setSpeedFast() {
  setSpeed(FAST_FORWARD, FAST_FORWARD);
}

void ServoMotor::setSpeedSlow() {
  setSpeed(SLOW_FORWARD, SLOW_FORWARD);
}


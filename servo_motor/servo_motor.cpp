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
  setSpeed(SLOW_FORWARD, SLOW_FORWARD);
}

void ServoMotor::moveBackward() {
  setSpeed(FAST_BACKWARD, FAST_BACKWARD);
}

void ServoMotor::turnLeft() {
  setSpeed(FAST_BACKWARD, SLOW_FORWARD);
}

void ServoMotor::turnRight() {
  setSpeed(SLOW_FORWARD, FAST_BACKWARD);
}

void ServoMotor::stop() {
  setSpeed(STOP, STOP);
}

void ServoMotor::setSpeedFast() {
  setSpeed(FAST_FORWARD, FAST_FORWARD);
}

void ServoMotor::setSpeedSlow() {
  setSpeed(SLOW_FORWARD, SLOW_FORWARD);
}
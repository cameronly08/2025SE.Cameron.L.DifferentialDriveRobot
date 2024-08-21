#include "Servo_Motor.h"

ServoMotor::ServoMotor(byte leftPin, byte rightPin) {
  this->leftPin = leftPin;
  this->rightPin = rightPin;
}

void ServoMotor::init() {
  leftMotor.attach(leftPin, 700, 2300);
  rightMotor.attach(rightPin, 700, 2300);
  stop();
}

void ServoMotor::setSpeed(int leftSpeed, int rightSpeed) {
    leftMotor.writeMicroseconds(leftSpeed);
    rightMotor.writeMicroseconds(rightSpeed);
  }

void ServoMotor::moveForward(int speed) {
    setSpeed(STOP + speed, STOP - speed);
}

void ServoMotor::moveBackward(int speed) {
    setSpeed(STOP - speed, STOP + speed);
}

void ServoMotor::turnLeft(int speed) {
    setSpeed(STOP - speed, STOP - speed);
}

void ServoMotor::turnRight(int speed) {
    setSpeed(STOP + speed, STOP + speed);
}

void ServoMotor::stop() {
    setSpeed(STOP, STOP);
}



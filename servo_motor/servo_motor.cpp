#include "ServoMotor.h"

#define STOP 1500

ServoMotor::ServoMotor(int motorPin) : motorPin(motorPin) {
    motor.attach(motorPin, 700, 2300);
}

void ServoMotor::setSpeed(int speed) {
    motor.writeMicroseconds(speed);
}

void ServoMotor::stop() {
    motor.writeMicroseconds(STOP);
}
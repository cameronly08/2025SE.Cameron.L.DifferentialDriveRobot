#include "servo_motor.h"

#define STOP 1500

ServoMotor::ServoMotor(motorPin) : motorPin(motorPin) {
    motor.attach(motorPin, 700, 2300);
}

void ServoMotor::setSpeed(int speed) {
    motor.writeMicroseconds(int speed);
}

void ServoMotor::stop() {
    motor.writeMicroseconds(STOP);
}

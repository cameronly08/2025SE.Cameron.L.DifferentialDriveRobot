// for later remember to set const int for servo motor, and set values for the different speeds - fast forward, backward, slow forward, backward and stop and left and right turn.
#include <Servo.h>
#include "servo_motor.h"

#define LEFT_SERVO_PIN 9
#define RIGHT_SERVO_PIN 10 

class ServoMotor {
public:
    ServoMotor(int motorPin) {
        motor.attach(motorPin, 700, 2300);
    }

    void setSpeed(int speed) {
        motor.writeMicroseconds(speed);
    }

    void stop() {
        motor.writeMicroseconds(STOP);
    }

private:
    Servo motor;
};

class DDR {
public:
    DDR(int leftMotorPin, int rightMotorPin)
        : leftMotor(leftMotorPin), rightMotor(rightMotorPin), speed(SLOW_FORWARD) {}

    void moveForward() {
        setMotorSpeeds(speed, speed);
    }

    void moveBackward() {
        setMotorSpeeds(FAST_BACKWARD, FAST_BACKWARD);
    }

    void turnLeft() {
        setMotorSpeeds(FAST_BACKWARD, speed);
    }

    void turnRight() {
        setMotorSpeeds(speed, FAST_BACKWARD);
    }

    void setSpeedFast() {
        speed = FAST_FORWARD;
    }

    void setSpeedSlow() {
        speed = SLOW_FORWARD;
    }

    void stop() {
        leftMotor.stop();
        rightMotor.stop();
    }

private:
    ServoMotor leftMotor;
    ServoMotor rightMotor;
    int speed;

    void setMotorSpeeds(int leftSpeed, int rightSpeed) {
        leftMotor.setSpeed(leftSpeed);
        rightMotor.setSpeed(rightSpeed);
    }
};

DDR DDR(LEFT_SERVO_PIN, RIGHT_SERVO_PIN);

void setup() {
    DDR.setSpeedSlow();
}

void loop() {
    DDR.moveForward();
    delay(1000);
    DDR.turnRight();
    delay(500);
    DDR.moveBackward();
    delay(1000);
    DDR.turnLeft();
    delay(500);
    DDR.stop();
    delay(1000);
}






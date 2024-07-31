
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
    robot.setSpeedSlow();
}

void loop() {
    robot.moveForward();
    delay(1000);
    robot.turnRight();
    delay(500);
    robot.moveBackward();
    delay(1000);
    robot.turnLeft();
    delay(500);
    robot.stop();
    delay(1000);
}






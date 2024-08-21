#ifndef Servo_motor_h
#define Servo_motor_h

#include <Arduino.h>
#include <Servo.h>

class ServoMotor {
  public:
    ServoMotor(byte leftPin, byte rightPin);
    void init();
    void moveForward(int speed = 50);
    void moveBackward(int speed = 50);
    void turnLeft(int speed = 50);
    void turnRight(int speed = 50);
    void stop();
    void setSpeed(int leftSpeed, int rightSpeed);

  private:
    Servo leftMotor;
    Servo rightMotor;
    byte leftPin;
    byte rightPin;
    const int STOP = 90;
};

#endif


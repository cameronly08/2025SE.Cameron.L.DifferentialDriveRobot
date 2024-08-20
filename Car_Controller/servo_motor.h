#ifndef Servo_motor_h
#define Servo_motor_h

#include <Arduino.h>
#include <Servo.h>

class ServoMotor {
  public:
    ServoMotor(byte leftPin, byte rightPin);
    void init();
    void setSpeed(int leftSpeed, int rightSpeed);
    void moveForward();
    void moveBackward();
    void turnLeft();
    void turnRight();
    void stop();
    void setSpeedFast();
    void setSpeedSlow(); 

    static const int FAST_FORWARD = 1700;
    static const int SLOW_FORWARD = 1550;
    static const int FAST_BACKWARD = 1100;
    static const int SLOW_BACKWARD = 1350;
    static const int STOP = 1500;
    
  private:
    Servo leftMotor;
    Servo rightMotor;
    byte leftPin;
    byte rightPin;
};

#endif


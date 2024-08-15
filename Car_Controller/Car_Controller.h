#ifndef CAR_CONTROLLER_H
#define CAR_CONTROLLER_H

#include <Arduino.h>
#include "LineFinder.h"
#include "LED_Array.h"
#include "Servo_Motor.h"

class CarController {
  public:
  CarController(byte leftSensorPin, byte rightSensorPin, byte leftMotorPin, byte rightMotorPin);
    void init(); 
    void update();  

  private:
    LineFinder lineFinder;
    LEDArray ledArray;
    ServoMotor Servo;
    void followLine();
    void turnLeft();
    void turnRight();
    void stop();
};

#endif

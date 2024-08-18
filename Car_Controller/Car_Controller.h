#ifndef CAR_CONTROLLER_H
#define CAR_CONTROLLER_H

#include <Arduino.h>
#include "LineFinder.h"
#include "LED_Array.h"
#include "Servo_Motor.h"
#include "Sensor.h"

class CarController {
  public:
  CarController(byte leftSensorPin, byte rightSensorPin, byte leftMotorPin, byte rightMotorPin); // include ultrasonic pins here 
    void init(); 
    void update();  

  private:
    LineFinder lineFinder;
    LEDArray ledArray;
    ServoMotor motor;
    void followLine();
    void turnLeft();
    void turnRight();
    void stop();
};

#endif

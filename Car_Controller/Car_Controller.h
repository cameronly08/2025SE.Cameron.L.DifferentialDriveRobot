#ifndef CAR_CONTROLLER_H
#define CAR_CONTROLLER_H

#include <Arduino.h>
#include "LineFinder.h"
#include "LED_Array.h"
#include "Servo_Motor.h"

class CarController {
  public:
    CarController(LineFinder& lineFinder, LEDArray& ledArray, ServoMotor& motors);
    void init(); 
    void update(); 

  private:
    LineFinder& lineFinder;
    LEDArray& ledArray;
    ServoMotor& motors;
    void followLine();
    void turnLeft();
    void turnRight();
    void stop();
};

#endif

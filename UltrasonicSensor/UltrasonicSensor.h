#ifndef UltrasonicSensor_H
#define UltrasonicSensor_H

#include <Arduino.h>
#include <Ultrasonic.h>
class Ultrasonic {
  public:
  Ultrasonic(int Upin);
  void init();
  long MeasureDistance();


  private:
  int Upin;

};

#endif
#include "UltrasonicSensor.h"

Ultrasonic::Ultrasonic(byte Upin) {
  this->Upin = Upin;
}
void Ultrasonic::init() {
  pinMode(Upin, OUTPUT);
  pinMode(Upin, INPUT);
}

void Ultrasonic::MeasureDistance() {


}


  // add a collision prevention method later 




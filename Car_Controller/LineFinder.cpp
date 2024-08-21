#include "LineFinder.h"

LineFinder::LineFinder(byte leftPin, byte rightPin) {
  this->leftPin = leftPin;
  this->rightPin = rightPin;
}

void LineFinder::init() {
  pinMode(leftPin, INPUT);
  pinMode(rightPin, INPUT); 
}

bool LineFinder::isLeftSensorOnLine() {
  int LeftSensorValue = analogRead(leftPin);
//  Serial.print("Left Sensor Value: ");
 // Serial.println(LeftSensorValue);
  if (LeftSensorValue >= 30) {
    return true;
  } else {
    return false;
  }
}

bool LineFinder::isRightSensorOnLine() {
  int RightSensorValue = analogRead(rightPin);
  //Serial.print("Right Sensor Value: ");
 // Serial.println(RightSensorValue);
  if (RightSensorValue >= 30) {
    return true;
  } else {
    return false;
  }
}





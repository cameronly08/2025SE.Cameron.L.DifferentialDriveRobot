#include "LineFinder.h"

LineFinder::LineFinder(byte leftPin, byte rightPin) {
  this->leftPin = leftPin;
  this->rightPin = rightPin;
}

void LineFinder::init() {
  pinMode(leftPin, INPUT); // Initialize the left sensor pin as input
  pinMode(rightPin, INPUT); // Initialize the right sensor pin as input
}

bool LineFinder::isLeftSensorOnLine() {
  int LeftSensorValue = analogRead(leftPin);
  if (LeftSensorValue >= 35) {
    return true;
  } else {
    return false;
  }
}

bool LineFinder::isRightSensorOnLine() {
  int RightSensorValue = analogRead(rightPin);
  if (RightSensorValue >= 35) {
    return true;
  } else {
    return false;
  }
}





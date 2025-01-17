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
  int() = analogRead(leftPin);
  // greater than 35 is black

}

bool LineFinder::isRightSensorOnLine() {
  analogRead(rightPin);
}

// void LineFinder::followLine(ServoMotor& motorController) {
 // bool leftOnLine = isLeftSensorOnLine();
 // bool rightOnLine = isRightSensorOnLine(); 

// if (leftOnLine && rightOnLine) {
   // motorController.moveForward(); // Move forward if both sensors detect the line
//  } else if (!leftOnLine && rightOnLine) {
 //   motorController.turnRight(); // Turn right if only the right sensor detects the line
//  } else if (leftOnLine && !rightOnLine) {
//    motorController.turnLeft(); // Turn left if only the left sensor detects the line
 // } else {
  //  motorController.stop(); // Stop if no sensors detect the line
  // }
//}


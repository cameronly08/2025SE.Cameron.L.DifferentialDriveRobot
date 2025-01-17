#ifndef LineFinder_h
#define LineFinder_h

#include <Arduino.h>

class LineFinder {
  public:
    LineFinder(byte leftPin, byte rightPin); // Constructor declaration
    void init(); // Method to initialize the line finder sensors
    bool isLeftSensorOnLine(); // Method to check left sensor
    bool isRightSensorOnLine(); // Method to check right sensor

  private:
    byte leftPin;
    byte rightPin;
};

#endif

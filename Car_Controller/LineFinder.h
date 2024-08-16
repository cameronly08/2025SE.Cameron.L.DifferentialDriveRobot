#ifndef LineFinder_h
#define LineFinder_h

#include <Arduino.h>

class LineFinder {
  public:
    LineFinder(byte leftPin, byte rightPin); 
    void init(); 
    bool isLeftSensorOnLine(); 
    bool isRightSensorOnLine(); 

  private:
    byte leftPin;
    byte rightPin;
};

#endif

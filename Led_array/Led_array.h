#ifndef LED_Array_h
#define LED_Array_h

#include <Arduino.h>
#include "Arduino_LED_Matrix.h"

class LEDArray {
  public:
    LEDArray(); // Constructor
    void displayTick(); // Method to display a tick
    void displayCross(); // Method to display a cross

  private:
    ArduinoLEDMatrix matrix;
    const uint32_t tick[4] = {
      0x6006006,
      0x603fc1,
      0xf80f0060,
      66
    };
    const uint32_t cross[4] = {
      0x600f01f,
      0x83fc0600,
      0x60060060,
      66
    };
};

#endif

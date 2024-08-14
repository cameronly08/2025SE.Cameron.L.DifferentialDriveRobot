#ifndef LED_ARRAY_H
#define LED_ARRAY_H

#include <Arduino.h>
#include "Arduino_LED_Matrix.h"

class LEDArray {
  public:
    LEDArray(); 
    void begin(); 
    void displayTick();
    void displayCross(); 

  private:
    ArduinoLEDMatrix matrix;
    const uint32_t tick[12] = {
      0x00000000, 0x00010000, 0x00020000, 0x00040000, 0x00080000, 0x00100000,
      0x00200000, 0x00400000, 0x00800000, 0x01000000, 0x02000000, 0x00000000
    };

    const uint32_t cross[12] = {
      0x80000001, 0x40000002, 0x20000004, 0x10000008, 0x08000000, 0x04000000,
      0x02000000, 0x01000000, 0x02000000, 0x04000000, 0x08000000, 0x10000000
    };
};

#endif

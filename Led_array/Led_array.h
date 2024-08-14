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
const uint32_t tick[8] = {
  0b000000000000,
  0b000000000001,
  0b000000000010,
  0b000000000100,
  0b000000001000,
  0b100000010000,
  0b010000100000,
  0b001001000000
};
 

const uint32_t cross[8] = {
  0b100000000001,
  0b010000000010,
  0b001000000100,
  0b000100001000,
  0b000010010000,
  0b000001100000,
  0b000010010000,
  0b000100001000
};

};

#endif

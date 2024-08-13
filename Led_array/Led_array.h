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
  const uint8_t tick[8] = {

};


  const uint8_t cross[8] = {


};

#endif

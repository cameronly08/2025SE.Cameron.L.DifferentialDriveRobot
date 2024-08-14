#ifndef LED_ARRAY_H
#define LED_ARRAY_H

#include <Arduino.h>
#include "Arduino_LED_Matrix.h"

class LEDArray {
  public:
    LEDArray(); 
    void begin(); 
    void displayLike();
    void displayDanger(); 

  private:
    ArduinoLEDMatrix matrix;


 


};

#endif

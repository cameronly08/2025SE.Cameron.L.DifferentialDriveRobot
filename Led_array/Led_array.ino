#include "LED_array.h"

ArduinoLEDMatrix matrix;
LEDArray ledArray;

void setup() {
Serial.begin(9600);
matrix.begin();
}

void loop() {
  ledArray.displayTick();
  delay(500);
  ledArray.displayCross();
  delay(500);

}
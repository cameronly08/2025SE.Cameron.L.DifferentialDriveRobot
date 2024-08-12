#include "LED_array.h"

LEDArray ledArray;

void setup() {
Serial.begin(9600);
}

void loop() {
  ledArray.displayTick();
  delay(500);
  ledArray.displayCross();

}
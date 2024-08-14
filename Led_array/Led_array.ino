#include "LED_Array.h"

LEDArray ledArray; 

void setup() {
  Serial.begin(9600);
  ledArray.begin();
}

void loop() {
  ledArray.displayTick();
  delay(500);
  ledArray.displayCross();
  delay(500);
}

#include "LED_Array.h"

LEDArray ledArray; 

void setup() {
  Serial.begin(9600);
  ledArray.begin();
}

void loop() {
  ledArray.displayLike();
  delay(500);
  ledArray.displayDanger();
  delay(500);
}

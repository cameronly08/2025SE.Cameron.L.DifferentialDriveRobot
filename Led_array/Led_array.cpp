#include "LED_Array.h"
#include "Arduino_LED_Matrix.h"

LEDArray::LEDArray() {
}

void LEDArray::begin() {
  matrix.begin(); 
}

void LEDArray::displayTick() {
  matrix.loadFrame(tick);
}

void LEDArray::displayCross() {
  matrix.loadFrame(cross);
}

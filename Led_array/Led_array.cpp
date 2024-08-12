#include "LED_Array.h"

LEDArray::LEDArray() {
  matrix.begin();
}

void LEDArray::displayTick() {
  matrix.loadFrame(tick);
}

void LEDArray::displayCross() {
  matrix.loadFrame(cross);
}

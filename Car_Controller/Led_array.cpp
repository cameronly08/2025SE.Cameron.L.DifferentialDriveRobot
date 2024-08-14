#include "LED_Array.h"
#include "Arduino_LED_Matrix.h"

LEDArray::LEDArray() {
}

void LEDArray::begin() {
  matrix.begin(); 
}

void LEDArray::displayLike() {
  matrix.loadFrame(LEDMATRIX_LIKE);
}

void LEDArray::displayDanger() {
  matrix.loadFrame(LEDMATRIX_DANGER);
}

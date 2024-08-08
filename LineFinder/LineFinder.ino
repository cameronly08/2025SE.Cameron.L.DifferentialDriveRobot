
#include "LineFinder.h"

#define LEFT_SENSOR_PIN 2
#define RIGHT_SENSOR_PIN 3

LineFinder lineFinder(LEFT_SENSOR_PIN, RIGHT_SENSOR_PIN);

void setup() {
  lineFinder.init(); // Initialize the line finder sensors
}
void loop() {
  lineFinder.isLeftSensorOnLine();
  lineFinder.isRightSensorOnLine();
 // for later -> lineFinder.followLine(DDR); // Follow the line using the motor controller
}


 
#include "LineFinder.h"

#define LEFT_SENSOR_PIN A1
#define RIGHT_SENSOR_PIN A0

LineFinder lineFinder(LEFT_SENSOR_PIN, RIGHT_SENSOR_PIN);

void setup() {
  Serial.begin(9600);
  lineFinder.init(); // Initialize the line finder sensors
  
}
void loop() {
  bool leftOnLine = lineFinder.isLeftSensorOnLine();
  bool rightOnLine = lineFinder.isRightSensorOnLine();
  
  if (leftOnLine || rightOnLine) {
    Serial.println("Black line found");
  } else {
    Serial.println("No line found");
  }
  delay(500);
  
 // for later -> lineFinder.followLine(DDR); // Follow the line using the motor controller
}

 
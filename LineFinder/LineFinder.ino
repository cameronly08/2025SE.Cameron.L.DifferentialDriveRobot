#include "LED_Array.h"
#include "LineFinder.h"

#define LEFT_SENSOR_PIN A1
#define RIGHT_SENSOR_PIN A0

LineFinder lineFinder(LEFT_SENSOR_PIN, RIGHT_SENSOR_PIN);
LEDArray ledArray;

void setup() {
  Serial.begin(9600);
  lineFinder.init();
  ledArray.begin(); 
  
}
void loop() {
  bool leftOnLine = lineFinder.isLeftSensorOnLine();
  bool rightOnLine = lineFinder.isRightSensorOnLine();
  
  if (leftOnLine || rightOnLine) {
    Serial.println("Black line found");
    ledArray.displayTick();
  } else {
    Serial.println("No line found");
    ledArray.displayCross();
  }
  delay(500);
  
 // for later -> lineFinder.followLine(DDR); // Follow the line using the motor controller
}

 
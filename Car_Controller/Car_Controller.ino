#include "LineFinder.h"
#include "LED_Array.h"
#include "Car_Controller.h"
#include "Servo_Motor.h"
#include "UltrasonicSensor.h"

#define LEFT_SENSOR_PIN A1
#define RIGHT_SENSOR_PIN A0
#define LEFT_MOTOR_PIN 10
#define RIGHT_MOTOR_PIN 9
// define both ultrasonic pins



CarController carController(LEFT_SENSOR_PIN, RIGHT_SENSOR_PIN, LEFT_MOTOR_PIN, RIGHT_MOTOR_PIN);


void setup() {  
  Serial.begin(9600);
  carController.init();
}

void loop() {
  carController.update();
}

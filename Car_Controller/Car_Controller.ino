#include "LineFinder.h"
#include "LED_Array.h"
#include "Car_Controller.h"
#include "Servo_Motor.h"

#define LEFT_SENSOR_PIN A1
#define RIGHT_SENSOR_PIN A0
#define LEFT_MOTOR_PIN 10
#define RIGHT_MOTOR_PIN 9


LineFinder LineFinder(LEFT_SENSOR_PIN, RIGHT_SENSOR_PIN);
LEDArray ledArray;
ServoMotor ServoMotor(LEFT_MOTOR_PIN, RIGHT_MOTOR_PIN);
CarController carController(LineFinder, ledArray, ServoMotor);

void setup() {
  Serial.begin(9600);
  LineFinder.init();
  ledArray.begin();
  ServoMotor.init();
  carController.init();
}

void loop() {
  carController.update();
}

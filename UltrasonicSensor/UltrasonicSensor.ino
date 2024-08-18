#include "UltrasonicSensor.h"
const byte trigPin = 7;
const byte echoPin = 8; // example pins

UltrasonicSensor sensor(trigPin, echoPin);

void setup() {
  Serial.begin(9600);
  sensor.init();
}

void loop() {
  float distance = sensor.readDistance();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(1000);
}
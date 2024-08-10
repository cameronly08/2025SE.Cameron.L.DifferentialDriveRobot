#include "UltrasonicSensor.h"

Ultrasonic myUltrasonicSensor(5);
void setup()
{
 Serial.begin(9600);
 Ultrasonic.init();
}
void loop()
{
  long distance = ultrasonic.measureDistance(); // Measure distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(500);
}
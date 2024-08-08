/*
  Purpose: Basic example of the Seead Ultrasonic Ranger module
  Notes: Connect to a digital PIN
  Author: Ben Jones ??/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-Ultrasonic_Ranger/
  Library Source: https://github.com/Seeed-Studio/Seeed_Arduino_UltrasonicRanger
*/

// This is a different Ultrasonic Library to the one we used in the bootcamp becuase we are using a Seead grove sensor not a generic 4 pin Ultrasonic sensor
#include "Ultrasonic.h"

Ultrasonic myUltrasonicSensor(5);
void setup()
{
 Serial.begin(9600);
}
void loop()
{
  long RangeInCentimeters;

  RangeInCentimeters = myUltrasonicSensor.MeasureInCentimeters(); // two measurements should keep an interval
  Serial.print(RangeInCentimeters);//0~400cm
  Serial.println(" cm");
  delay(250);
}
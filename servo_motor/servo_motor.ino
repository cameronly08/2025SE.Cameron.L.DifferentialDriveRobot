
/*
  Purpose: Basic example of controlling a continuos servo
  Notes: 
    1. See attached schematic
    2. 100µF 25v capacitor
    3. Servo may need screw adjustment to set 1500 as stop
*/

#include <Servo.h>
Servo servo;

void setup() {
  servo.attach(5, 700, 2300);
}

void loop() {
  servo.writeMicroseconds(1000);  //2300 fast forward, 700 fast backards, 1500 stop
  delay(100); // requires short delay as loop breaks frequency
}


class Servo;



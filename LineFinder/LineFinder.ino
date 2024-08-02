/*
  Purpose: Basic example of reading binary data from the Seead Line Finder sensor module
  Notes: 
    1. Connect to a digital pin
    2. High when black is detected, Low when white is detected
*/

static unsigned int lineFollower = 3; // it = the digital pin number 

void setup() {
  Serial.begin(9600);
  pinMode(lineFollower, INPUT);
}

void loop() {
  Serial.print("lineFollower:");
  Serial.println(digitalRead(lineFollower));
}
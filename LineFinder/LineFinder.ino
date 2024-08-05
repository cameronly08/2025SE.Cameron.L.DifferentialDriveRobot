
#include "LineFinder.h"

#define LEFT_LINE_PIN 9
#define RIGHT_LINE_PIN 10

int signalPin =  3; 
void setup()   {
  pinMode(signalPin, INPUT); 
  Serial.begin(9600); 

void loop()
{
  if(HIGH == digitalRead(signalPin))
    Serial.println("line detected");
  else  Serial.println("no line"); 
  delay(1000);                
}
}
#include "UltrasonicSensor.h"
#include <Arduino.h>

UltrasonicSensor::UltrasonicSensor(byte trigPin, byte echoPin) 
    : Sensor(echoPin), trigPin(trigPin) {}

void UltrasonicSensor::init() {
    pinMode(trigPin, OUTPUT);
    pinMode(pin, INPUT);  // pin is inherited from Sensor
}

void UltrasonicSensor::readDistance() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    long duration = pulseIn(pin, HIGH);
    return duration * 0.034 / 2;
}



#ifndef ULTRASONICSENSOR_H
#define ULTRASONICSENSOR_H

#include "Sensor.h"

class UltrasonicSensor : public Sensor {
public:
    UltrasonicSensor(byte trigPin, byte echoPin);
    void init() override;
    float readDistance() override;  

private:
    byte trigPin;
    byte echoPin;
};

#endif  
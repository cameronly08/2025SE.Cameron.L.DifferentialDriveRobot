#ifndef SENSOR_H
#define SENSOR_H

#include <Arduino.h>

class Sensor {
public:
    virtual void init() = 0;
    virtual float readDistance() = 0;

protected:
    byte pin;

    Sensor(byte pin) : pin(pin) {}
};

#endif
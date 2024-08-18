#ifndef SENSOR_H
#define SENSOR_H

class Sensor {
public:
    virtual void init() = 0;
    virtual float readDistance() = 0;

protected:
    byte pin;

    Sensor(byte pin) : pin(pin) {}
};

#endif
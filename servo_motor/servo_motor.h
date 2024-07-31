
#include <Servo.h>

class ServoMotor {
public:
    ServoMotor(int motorPin);
    
    void setSpeed(int speed);
    void stop();
    
private:
    Servo motor;
    int motorPin;
};


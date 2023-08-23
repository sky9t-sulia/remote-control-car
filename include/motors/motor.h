#ifndef MOTOR_H_
#define MOTOR_H_

#include <ESP32Servo.h>

enum MotorType
{
    DC,
    SERVO
};

class Motor
{
protected:
    bool initialized = false;
    int8_t value;
    virtual void actuate(){};

public:
    Motor();
    void setValue(int8_t value);
};

#endif
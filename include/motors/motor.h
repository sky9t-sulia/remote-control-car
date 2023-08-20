#ifndef MOTOR_H_
#define MOTOR_H_

enum MotorType
{
    DC,
    SERVO
};

class Motor
{
protected:
    int pin;
    int8_t value;
    virtual void actuate(){};

public:
    Motor(int pin);
    void setValue(int value);
};

#endif
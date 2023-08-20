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
    uint8_t pin;
    int8_t value;
    virtual void actuate(){};

public:
    Motor(uint8_t pin);
    void setValue(int8_t value);
};

#endif
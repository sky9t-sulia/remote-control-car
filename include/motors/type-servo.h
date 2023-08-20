#ifndef SERVO_MOTOR_H_
#define SERVO_MOTOR_H_

#include "motor.h"

class TypeServo : public Motor
{
protected:
    void actuate();

public:
    Servo *servo;
    TypeServo(uint8_t pin);
};

#endif
#ifndef SERVO_MOTOR_H_
#define SERVO_MOTOR_H_

#include "motor.h"

class TypeServo : public Motor
{
protected:
    void actuate();
    uint8_t getAngle();

public:
    Servo *servo;
    TypeServo(uint8_t pin);
};

#endif
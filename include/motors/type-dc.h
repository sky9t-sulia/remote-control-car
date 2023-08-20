#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "motor.h"

class TypeDc : public Motor
{
protected:
    void actuate();

public:
    using Motor::Motor;
};

#endif
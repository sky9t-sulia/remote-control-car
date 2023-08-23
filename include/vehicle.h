#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <Ps3Controller.h>
#include "motors/motor.h"
#include "motors/type-dc.h"
#include "motors/type-servo.h"

class Vehicle
{
    Motor *motors[2];
    bool disabled;

public:
    Vehicle();
    void repair();
    void disable();
    bool isDisabled();
    void setSpeed(int8_t value);
    void setTurn(int8_t value);
    TypeDc *getDcMotor();
};

#endif
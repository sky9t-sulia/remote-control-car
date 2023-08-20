#ifndef VEHICLE_H_
#define VEHICLE_H_

#include "motors/type-dc.h"
#include "motors/type-servo.h"

class Vehicle
{
    Motor *motors[2];
    int turnValue;
    int speedValue;
    bool disabled;

public:
    Vehicle(int motorPin, int servoPin);
    void disable();
    void repair();
    bool isDisabled();
    void setSpeedValue(int value);
    void setTurnValue(int value);
};

#endif
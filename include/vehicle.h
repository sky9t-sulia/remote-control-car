#ifndef VEHICLE_H_
#define VEHICLE_H_

#include "motor.h"

class Vehicle {
    Motor *motors[2];

    public:
        Vehicle(int motorPin, int steerPin);
        void move(int speed, int steer);
        void stop();
};

#endif
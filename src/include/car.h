#ifndef CAR_H_
#define CAR_H_

#include <Arduino.h>
#include "controls.h"
#include "motor.h"

class Car {
    Motor *motors[2];

    public:
        Car(int motorPin, int steerPin);
        void move(int8_t speed, int8_t steer);
};

#endif
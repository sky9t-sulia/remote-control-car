#ifndef CONTROLS_H_
#define CONTROLS_H_

#include <Arduino.h>
#include <Ps3Controller.h>


class Controls {
    int8_t steer;
    int8_t speed;
    public:
        Controls();
        void update();
        void stop();
        int8_t getSpeed();
        int8_t getSteer();
};

#endif
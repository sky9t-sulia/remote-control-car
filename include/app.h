#ifndef APP_H_
#define APP_H_

#include "car.h"
#include "controls.h"
#include "remote.h"

class App {
    Car *car;
    Remote *remote;
    Controls *controls;
    public:
        App(int motorPin, int servoPin);
        void setup();
        void update();
        Controls *getControls();
};

#endif
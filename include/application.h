#ifndef BLUE_CAR_H_
#define BLUE_CAR_H_

#include <Arduino.h>
#include <Ps3Controller.h>
#include <ESP32Servo.h>

#include "vehicle.h"
#include "controls.h"
#include "remote.h"

class Application {
    Remote *remote;
    Vehicle *vehicle;
    Controls *controls;
    public:
        Application(int motorPin, int servoPin);
        void loop();
        Controls *getControls();
};

#endif
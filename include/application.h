#ifndef APPLICATION_H_
#define APPLICATION_H_

#include <Arduino.h>
#include <Ps3Controller.h>
#include <ESP32Servo.h>

#include "vehicle.h"
#include "remote.h"

class Application
{
    Remote *remote;
    Vehicle *vehicle;

public:
    Application(int motorPin, int servoPin);
    void loop();
    Vehicle *getVehicle();
};

#endif
#include <application.h>

Controls::Controls() {}

void Controls::update() {
    this->steer = Ps3.data.analog.stick.rx;
    this->speed = Ps3.data.analog.stick.ly;
}

int Controls::getSpeed() {
    return this->speed;
}

int Controls::getSteer() {
    return this->steer;
}
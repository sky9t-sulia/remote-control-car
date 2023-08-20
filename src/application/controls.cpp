#include <controls.h>


Controls::Controls() {

}

void Controls::update() {
    this->steer = Ps3.data.analog.stick.rx;
    this->speed = Ps3.data.analog.stick.ly;
}

void Controls::stop() 
{
    this->speed = 0;
    this->steer = 0;

    Serial.println("Emergency stop!");
}

int8_t Controls::getSpeed() {
    return this->speed;
}

int8_t Controls::getSteer() {
    return this->steer;
}
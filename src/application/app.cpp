#include <Arduino.h>
#include <app.h>

/*
 * Application
 */
App::App(int motorPin, int servoPin) {
    // Initialize
    this->car = new Car(motorPin, servoPin);
    this->remote = new Remote();
    this->controls = new Controls();
}

void App::update()
{
    // loop method
    if (!this->remote->check())
    {
        this->controls->stop();
        this->remote->connect();
        return;
    }

    this->car->move(
        this->controls->getSpeed(),
        this->controls->getSteer()
    );
}

Controls *App::getControls()
{
    return this->controls;
}
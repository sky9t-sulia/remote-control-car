#include <application.h>

Application::Application(int motorPin, int servoPin) {
    this->vehicle = new Vehicle(motorPin, servoPin);
    this->remote = new Remote();
    this->controls = new Controls();
}

void Application::loop()
{
    if (!this->remote->check())
    {
        // stop the car
        this->vehicle->stop();
        this->remote->connect();
        return;
    }

    this->vehicle->move(
        this->controls->getSpeed(),
        this->controls->getSteer()
    );
}

Controls *Application::getControls()
{
    return this->controls;
}
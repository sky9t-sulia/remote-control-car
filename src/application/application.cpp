#include <application.h>

Application::Application(int motorPin, int servoPin)
{
    this->remote = new Remote();
    this->vehicle = new Vehicle(motorPin, servoPin);
}

void Application::loop()
{
    if (!this->remote->check())
    {
        // stop the car
        this->vehicle->disable();
        this->remote->connect();
        return;
    }

    // After successfull connection vehicle can move.
    if (this->vehicle->isDisabled())
    {
        this->vehicle->repair();
    }
}

Vehicle *Application::getVehicle()
{
    return this->vehicle;
}
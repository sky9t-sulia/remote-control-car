#include <application.h>

Vehicle *vehicle;

void vehicleInit(uint8_t motorPin, uint8_t servoPin)
{
    vehicle = new Vehicle(motorPin, servoPin);
    connectToRemote();
}

void onUpdate()
{
    vehicle->setSpeed(Ps3.data.analog.stick.ly);
    vehicle->setTurn(Ps3.data.analog.stick.rx);
}

void onConnect()
{
    if (vehicle->isDisabled())
    {
        vehicle->repair();
    }
}

void onDisconnect()
{
    vehicle->disable();
    connectToRemote();
}

void connectToRemote()
{
    Ps3.end();
    Ps3.begin();
    Ps3.attach(onUpdate);
    Ps3.attachOnConnect(onConnect);
    Ps3.attachOnDisconnect(onDisconnect);
}
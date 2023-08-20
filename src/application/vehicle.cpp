#include <application.h>

Vehicle::Vehicle(int motorPin, int servoPin)
{
    this->motors[MotorType::DC] = new TypeDc(motorPin);
    this->motors[MotorType::SERVO] = new TypeServo(servoPin);
}

void Vehicle::disable()
{
    this->setTurnValue(0);
    this->setSpeedValue(0);
    this->disabled = true;
}

bool Vehicle::isDisabled()
{
    return this->disabled;
}

void Vehicle::repair()
{
    this->disabled = false;
}

void Vehicle::setSpeedValue(int value)
{
    if (this->disabled)
        return;
    this->motors[MotorType::DC]->setValue(value);
}

void Vehicle::setTurnValue(int value)
{
    if (this->disabled)
        return;
    this->motors[MotorType::SERVO]->setValue(value);
}
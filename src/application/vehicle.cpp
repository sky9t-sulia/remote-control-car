#include "vehicle.h"

Vehicle::Vehicle(uint8_t motorPin, uint8_t servoPin)
{
    this->motors[MotorType::DC] = new TypeDc(motorPin);
    this->motors[MotorType::SERVO] = new TypeServo(servoPin);
}

void Vehicle::repair()
{
    this->disabled = false;
}

void Vehicle::disable()
{
    this->setTurn(0);
    this->setSpeed(0);
    this->disabled = true;
}

bool Vehicle::isDisabled()
{
    return this->disabled;
}

void Vehicle::setSpeed(int8_t value)
{
    if (this->disabled)
        return;
    this->motors[MotorType::DC]->setValue(value);
}

void Vehicle::setTurn(int8_t value)
{
    if (this->disabled)
        return;
    this->motors[MotorType::SERVO]->setValue(value);
}
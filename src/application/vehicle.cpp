#include "vehicle.h"
#include "application.h"

Vehicle::Vehicle()
{
    this->motors[MotorType::DC] = new TypeDc(PIN_MOTOR_D0, PIN_MOTOR_D1);
    this->motors[MotorType::SERVO] = new TypeServo(PIN_SERVO);
}

void Vehicle::repair()
{
    this->disabled = false;
}

void Vehicle::disable()
{
    this->setTurn(0);
    this->getDcMotor()->stop();
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

TypeDc *Vehicle::getDcMotor()
{
    return static_cast<TypeDc *>(this->motors[MotorType::DC]);
}
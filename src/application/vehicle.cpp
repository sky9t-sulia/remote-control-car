#include <application.h>

Vehicle::Vehicle(int motorPin, int steerPin) 
{
    this->motors[motorType::DC] = new DCMotor(motorPin);
    this->motors[motorType::SERVO] = new ServoMotor(steerPin);
}

void Vehicle::move(int speed, int steer) 
{
    this->motors[motorType::DC]->setValue(speed);
    this->motors[motorType::SERVO]->setValue(steer);
}

void Vehicle::stop()
{
    this->move(0, 0);
}
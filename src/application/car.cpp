#include <car.h>

Car::Car(int motorPin, int steerPin) 
{
    this->motors[motorType::DC] = new DCMotor(motorPin);
    this->motors[motorType::SERVO] = new ServoMotor(steerPin);
}

void Car::move(int8_t speed, int8_t steer) 
{
    this->motors[motorType::DC]->setValue(speed);
    this->motors[motorType::SERVO]->setValue(steer);
}
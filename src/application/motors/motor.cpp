#include <application.h>

Motor::Motor(int pin)
{
    this->pin = pin;
}

void Motor::setValue(int value)
{
    if (this->value != value)
    {
        this->value = value;
        this->actuate();
    }
}
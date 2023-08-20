#include <vehicle.h>

Motor::Motor(uint8_t pin)
{
    this->pin = pin;
}

void Motor::setValue(int8_t value)
{
    if (this->value != value)
    {
        this->value = value;
        this->actuate();
    }
}
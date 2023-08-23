#include <vehicle.h>

Motor::Motor() {}

void Motor::setValue(int8_t value)
{
    if (this->value != value)
    {
        this->value = value;
        this->actuate();
    }
}
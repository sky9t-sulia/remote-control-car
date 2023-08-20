#include <vehicle.h>

uint8_t TypeDc::getSpeed()
{
    if (this->value > 0)
    {
        // --> move forward
        return this->value;
    }

    // <-- move backward
    return this->value;
}

void TypeDc::actuate()
{
    // PWM this->getSpeed()
    Serial.print("Moving...\t");
    Serial.println(this->value);
}
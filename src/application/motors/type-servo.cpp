#include <vehicle.h>

TypeServo::TypeServo(uint8_t pin) : Motor(pin)
{
    this->servo = new Servo();
    this->servo->attach(this->pin);
}

uint8_t TypeServo::getAngle()
{
    if (this->value > 0)
    {
        // --> turn right
        return this->value;
    }

    // <-- turn left
    return this->value;
}

void TypeServo::actuate()
{
    this->servo->write(this->getAngle());
    Serial.print("Steering...\t");
    Serial.println(this->value);
}
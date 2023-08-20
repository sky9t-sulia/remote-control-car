#include <vehicle.h>

TypeServo::TypeServo(uint8_t pin) : Motor(pin)
{
    this->servo = new Servo();
    this->servo->attach(this->pin);
}

void TypeServo::actuate()
{
    // NEED TO PARSE VALUE AS ANGLE!
    this->servo->write(this->value);
    Serial.print("Steering...\t");
    Serial.println(this->value);
}
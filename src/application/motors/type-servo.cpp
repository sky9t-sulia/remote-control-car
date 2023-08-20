#include "application.h"

TypeServo::TypeServo(int pin) : Motor(pin)
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
#include <vehicle.h>

TypeServo::TypeServo(int8_t servoPin) : Motor()
{
    ESP32PWM::timerCount[0] = 4;
    this->servo = new Servo();
    this->servo->setPeriodHertz(50);
    this->servo->attach(servoPin, 1000, 2000);

    this->initialized = true;
}

uint8_t TypeServo::getAngle()
{
    if (this->value > 0)
    {
        // --> turn right
        return map(this->value, 0, 127, ANGLE_CENTER, ANGLE_MIN);
    }

    // <-- turn left
    return map(abs(this->value), 0, 127, ANGLE_CENTER, ANGLE_MAX);
}

void TypeServo::actuate()
{
    if (!this->initialized)
    {
        return;
    }
    Serial.println("Steering!");
    this->servo->write(this->getAngle());
}
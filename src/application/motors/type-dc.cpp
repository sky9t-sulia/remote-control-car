#include <vehicle.h>

TypeDc::TypeDc(int8_t pinD0, int8_t pinD1) : Motor()
{
    this->d0 = pinD0;
    this->d1 = pinD1;

    ledcAttachPin(this->d0, 0);
    ledcSetup(MOTOR_PWM_CHAN, MOTOR_PWM_FREQ, MOTOR_PWM_RES);
    pinMode(this->d1, OUTPUT);
    this->setDirection(MOTOR_FORWARD);
    this->stop();

    this->initialized = true;
}

void TypeDc::setDirection(uint8_t direction)
{
    if (this->direction != direction)
    {
        this->direction = direction;
        digitalWrite(this->d1, direction);
    }
}

uint8_t TypeDc::getDirection()
{
    return this->direction;
}

uint8_t TypeDc::getSpeed()
{
    if (this->value > MOTOR_DEAD_ZONE)
    {
        // Move backward
        this->setDirection(MOTOR_BACKWARD);
        return map(this->value, 0, 128, 0, MAX_SPEED);
    }

    if (this->value < -MOTOR_DEAD_ZONE)
    {
        // Move forward
        this->setDirection(MOTOR_FORWARD);
        return map(abs(this->value), 0, 128, 255, 255 - MAX_SPEED);
    }

    if (this->getDirection() == MOTOR_FORWARD)
    {
        return 255;
    }

    return 0;
}

void TypeDc::actuate()
{
    if (!this->initialized)
    {
        return;
    }
    Serial.print("Moving! \t");
    Serial.println(this->getSpeed());
    ledcWrite(MOTOR_PWM_CHAN, this->getSpeed());
}

void TypeDc::stop()
{
    if (this->direction == MOTOR_FORWARD)
    {
        ledcWrite(MOTOR_PWM_CHAN, 255);
        return;
    }

    ledcWrite(MOTOR_PWM_CHAN, 0);
}
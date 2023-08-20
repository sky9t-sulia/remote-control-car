#include <include/motor.h>

Motor::Motor(int pin) 
{
    this->pin = pin;
}

void Motor::setValue(int8_t value) {
    if (this->value != value) {
        this->value = value;
        this->actuate();
    }
}

/*
* DC Motor
*/

void DCMotor::actuate()
{
    // PWM control! PARSE VALUE AS SPEED FORWARD/BACKWARD
    Serial.print("Moving...\t");
    Serial.println(this->value);
}


/*
* Servo Motor
*/

ServoMotor::ServoMotor(int pin) : Motor(pin) {
    this->servo = new Servo();
    this->servo->attach(this->pin);
}
void ServoMotor::actuate() 
{
    // NEED TO PARSE VALUE AS ANGLE!
    this->servo->write(this->value);
    Serial.print("Steering...\t");
    Serial.println(this->value);
}
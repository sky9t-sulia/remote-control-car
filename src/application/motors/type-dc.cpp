#include "application.h"

void TypeDc::actuate()
{
    // PWM control! PARSE VALUE AS SPEED FORWARD/BACKWARD
    Serial.print("Moving...\t");
    Serial.println(this->value);
}
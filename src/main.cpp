#include <Arduino.h>
#include "application.h"

#define MOTOR_PIN 12
#define SERVO_PIN 13

void setup()
{
    Serial.begin(115200);
    vehicleInit(MOTOR_PIN, SERVO_PIN);
    connectToRemote();
}

void loop()
{
    // We can leave it empty
}
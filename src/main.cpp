#include <Arduino.h>
#include <app.h>

#define MOTOR_PIN 12
#define SERVO_PIN 13

// Init.
App application(MOTOR_PIN, SERVO_PIN);

// Remote update callback.
void Remote::onRemoteUpdate()
{
    application.getControls()->update();
}

// Arduino methods
void setup()
{
    Serial.begin(115200);
}

void loop()
{
    application.update();
}
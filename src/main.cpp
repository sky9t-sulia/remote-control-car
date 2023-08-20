#include <Arduino.h>
#include <application.h>

#define MOTOR_PIN 12
#define SERVO_PIN 13

// Init.
Application *app = new Application(MOTOR_PIN, SERVO_PIN);

// Remote update callback.
void Remote::onRemoteUpdate()
{
    app->getControls()->update();
}

// Arduino methods
void setup()
{
    Serial.begin(115200);
}

void loop()
{
    app->loop();
}
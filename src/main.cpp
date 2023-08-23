#include <Arduino.h>
#include "application.h"

void setup()
{
    Serial.begin(115200);
    vehicleInit();
}

void loop()
{
    // We can leave it empty
}
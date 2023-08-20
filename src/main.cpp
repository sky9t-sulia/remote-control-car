#include <Arduino.h>

#include <include/remote.h>
#include <include/controls.h>
#include <include/car.h>

Remote remote;
Controls controls;
Car car(12, 13);  // motor pin, servo pin

void Remote::onRemoteUpdate() {
    controls.update();
}

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    if (!remote.check()) {
        controls.stop();
        remote.connect();
        // no actions needed
        return;
    }

    car.move(controls.getSpeed(), controls.getSteer());
}
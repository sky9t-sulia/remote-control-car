#include <remote.h>

Remote::Remote() {}

bool Remote::check() {
    if (!Ps3.isConnected()) {
        return false;
    }

    return true;
}

void Remote::connect() {
    Ps3.begin();
    Ps3.attach(Remote::onRemoteUpdate);

    while (!this->check()) {
        // wait
    }

    Serial.println("Remote connected!");
}
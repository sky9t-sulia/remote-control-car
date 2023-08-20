#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "vehicle.h"

void onUpdate();
void onConnect();
void onDisconnect();
void connectToRemote();
void vehicleInit(uint8_t motorPin, uint8_t servoPin);

#endif
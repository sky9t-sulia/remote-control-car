#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "vehicle.h"

#define PIN_MOTOR_D0 32
#define PIN_MOTOR_D1 33

#define PIN_SERVO 18

void onUpdate();
void onConnect();
void onDisconnect();
void connectToRemote();
void vehicleInit();

#endif
#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "motor.h"

#define MOTOR_PWM_CHAN 0
#define MOTOR_PWM_FREQ 10000
#define MOTOR_PWM_RES 8

#define MOTOR_DEAD_ZONE 10

#define MOTOR_FORWARD HIGH
#define MOTOR_BACKWARD LOW

/*
 * Adjust max speed here 0-255
 */
#define MAX_SPEED 170

class TypeDc : public Motor
{
protected:
    int8_t d0;
    int8_t d1;
    uint8_t direction;
    void actuate();
    uint8_t getSpeed();

public:
    TypeDc(int8_t pinD0, int8_t pinD1);
    uint8_t getDirection();
    void setDirection(uint8_t direction);
    void stop();
};

#endif
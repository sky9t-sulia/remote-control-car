#ifndef SERVO_MOTOR_H_
#define SERVO_MOTOR_H_

#include "motor.h"

/* Wheels can be moved in some range..
 * For me it's about from 35 to 110
 */
#define ANGLE_MIN 35
#define ANGLE_MAX 110
#define ANGLE_CENTER 72

class TypeServo : public Motor
{
protected:
    Servo *servo;
    void actuate();
    uint8_t getAngle();

public:
    TypeServo(int8_t servoPin);
};

#endif
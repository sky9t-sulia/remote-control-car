#ifndef MOTOR_H_
#define MOTOR_H_

enum motorType {
    DC,
    SERVO
};

class Motor {
    protected:
        int pin;
        int8_t value;

    public:
        Motor(int pin);
        void setValue(int value);
        virtual void actuate() {};
};

class DCMotor: public Motor {
    public:
        using Motor::Motor;
        void actuate();
};

class ServoMotor: public Motor {
    public:
        Servo *servo;
        ServoMotor(int pin);
        void actuate();
};

#endif
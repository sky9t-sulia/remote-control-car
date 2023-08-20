#ifndef CONTROLS_H_
#define CONTROLS_H_

class Controls {
    int steer;
    int speed;
    public:
        Controls();
        void update();
        int getSpeed();
        int getSteer();
};

#endif
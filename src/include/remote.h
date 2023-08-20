#ifndef REMOTE_H_
#define REMOTE_H_

#include "Ps3Controller.h"

class Remote {
    public:
        Remote();
        void connect();
        bool check();
        static void onRemoteUpdate();
};

#endif
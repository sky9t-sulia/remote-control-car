#ifndef REMOTE_H_
#define REMOTE_H_

class Remote
{
public:
    bool check();
    void connect();
    static void onRemoteUpdate();
};

#endif
#ifndef AG_H
#define AG_H
#include "hub.h"

class AG{
    public:
        AG(hub** Si){this->Si=Si;};
        void solve(){

        }
    private:
        hub* s;
        hub** Si;

};

#endif

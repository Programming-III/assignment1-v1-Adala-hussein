#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class bird: public Animal {
    private:
    float wingspan;
public:
    bird();
    bird(float wingspan);
    ~bird();
void sound();
};







#endif

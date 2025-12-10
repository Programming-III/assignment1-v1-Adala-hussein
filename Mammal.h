#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class mammal :public Animal {
private:
    string furcolor;
public:
    mammal();
    mammal(string furcolor);
    ~mammal();
void sound();
};






#endif

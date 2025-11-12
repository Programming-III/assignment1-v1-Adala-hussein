#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"


class enclosure {
    private:
    Animal* animal ;
    int capacity;
    int currentcount;
public:
    void addAnimal(Animal* animal);
    void displayAnimal();
    enclosure(Animal* animal, int capacity);
    ~enclosure();



};









#endif

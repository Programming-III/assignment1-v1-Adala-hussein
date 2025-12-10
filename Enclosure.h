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
  Animal&operator+=(const enclosure& e);
  Animal* operator[](int index);
  friend ostream& operator<<(ostream& out, const enclosure& e);
  ;



};









#endif

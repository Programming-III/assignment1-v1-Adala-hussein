#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
    private:
    string name;
    int age;
    bool ishungry;
    public:
    void display();
    void feed();
    string getName();
    int getAge();
    Animal();
    Animal(string name, int age, bool ishungry);
    ~Animal();
};



#endif

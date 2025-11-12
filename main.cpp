#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

void Animal::display() {
    cout<<"animal name:"<<name<<endl;
    cout<<"animal age:"<<age<<endl;
    cout<<"is hungry:"<<isHungry<<endl;
}
void Animal::feed() {

}
void enclosure::addAnimal(Animal *animal) {
    Animal* newanimal=new Animal[currentcount+1];
    for (int i=0;i<currentcount;i++) {
        newanimal[i]=animal[i];
        newanimal[newanimal]=animal;
        delete [] animal;
        newanimal=animal;
    }
    void enclosure::displayanimal(){
        cout<< getName<<endl;
        cout<<getAge<<endl;
    }
    void Animal::Animal(string name, int age, bool ishungry) {
        this->name=name;
        this->age=age;
        this->ishungry=ishungry;
    }
    void mammal(string name, int age, bool ishungry,string furcolor):Animal(name,age,ishungry){
        this->furcolor=furcolor;
    }
    void bird(string name, int age, bool ishungry,float wingspan):Animal(name,age,ishungry) {
        this-> wingspan= wingspan;
    }
    void reptile(string name, int age, bool ishungry, bool isvenomous):Animal(name,age,ishungry) {
        this->isvenomous= isvenomous;
    }
    void displayinfo() {
        cout<<vistorname<<endl;
        cout<<ticketbought<<endl;

    }
};

int main() {
    
    
    return 0;
}

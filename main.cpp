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
ostream& operator<<(ostream& os, const Animal& a) {
    os << "Animal name: " << a.name << endl;
    os << "Animal age: " << a.age << endl;
    os << "Is hungry: " << (a.ishungry ? "Yes" : "No") << endl;
    return os;
}
bool Animal::operator==(const Animal& other) const {
    return this->name == other.name;
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
    Animal&operator+=(const enclosure& e){
        this->animal+=e;
    }
    ostream& operator<<(ostream& out, const enclosure& e) {
    out<< e.capacity << endl;
    out <<  e.currentcount << endl;
    for (int i = 0; i < e.currentcount; i++) {
        e.animals[i]->display();
    }
}
    Animal* enclosure::operator[](int index) {
    if (index >= 0 && index < currentcount) {
        return animals[index];
    }
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
     bird* b = new bird("asfor", 5, true, 2.5);
     reptile* r = new reptile("so7lya", 3, false, false);
     mammal *m=new mammal("blue");
    cout << *b << endl;
    cout << *r << endl;
    enclosure enc(3);
    enc+= b;
    enc.addAnimal(r);

    Animal* animal = enc[0];
    if (animal != nullptr) {
        animal->display();
    }
    cout << enc<< endl;
    
    return 0;
}

#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

class Enclosure{
private:
    Animal * animal;
    int capacity;
    int currentCount;

public:
    Enclosure();
    Enclosure(int capacity, int currentCount);
    ~Enclosure();
    void addAnimal(Animal * a);
    void displayAnimals();

};




#endif

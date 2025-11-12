#ifndef REPTILE_H
#define REPTILE_H

#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

class Reptile : public Animal{
private:
    bool isVenomous;

public:
    Reptile();
    Reptile(string name, int age, bool isHungry, bool isVenmous);
    ~Reptile();
};



#endif

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
using namespace std;

class Animal{
private:
    string name;
    int age;
    bool isHungry;

public:
    Animal();
    Animal(string name, int age, bool isHungry);
    ~Animal();
    string getName();
    int getAge();
    bool getisHungry();
    void display();
    void feed();

};
#endif

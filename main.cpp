#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


Animal::Animal(){
name="";
age =0;
isHungry=true;
}

Animal :: Animal(string name, int age, bool isHungry){
this -> name=name;
this ->age=age;
this-> isHungry=isHungry;
}

    Animal::~Animal(){
    }

    string Animal::getName(){
    return name;
    }

    int Animal:: getAge(){
    return age;
    }

    bool Animal:: getisHungry(){
    return isHungry;
    }

    void Animal:: display(){
    cout<<name<<"(Age:"<<age<<","<<
    if (isHungry)
        cout<<"Hungry)"<< endl;
        else cout<< "Not Hungry)"<<endl;
    }

    void Animal:: feed(){
    if (isHungry)
        cout<<"Hungry"<< endl;
        else cout<< "Not Hungry"<<endl;
    }

    string Mammal :: getName(){
        return name;
        }
    int Mammal:: getAge(){
        return age;
        }
    bool Mammal:: GetHungry(){
        return isHungry;
        }
   Mammal:: Mammal():Animal(){
        furColor=" ";
    }
    Mammal:: Mammal(string name,int age,bool isHungry,string furColor):Animal(name, age,isHungry){
        this->furColor=FurColor;
        }

    Mammal :: ~Mammal(){
    }

    Bird::Bird():Animal(){wingSpan=0;}

    Bird:: Bird(string name,int age,bool isHungry,float wingSpan):Animal(name,age,isHungry){
        this->wingSpan=wingSpan;
        }
    Bird:: ~Bird(){
    }
    Reptile:: Reptile():Animal(){
        isVenomous=false;
        }
    Reptile::Reptile(string name,int age, bool isHungry,bool isVenomous):Animal(name,age,isHungry){
        this->isVenomous=isVenomous;
    }
    Reptile::~Reptile(){
    }

    Enclosure:: Enclosure(){
        capacity=0;
        currentCount=0;
        animal=NULL;
        }
    Enclosure :: Enclosure(int capacity,int currentCount){
        this->capacity=capacity;
    this->currentCount=currentCount;
        animal=new Animal[capacity];
    }
    Enclosure :: void addAnimal(Animal* a){
        if(capacity<currentCount){
            animal[currentCount]=a;
            currentCount++;
        }
        else{
            cout<<"no space"<<endl;
        }

    }
    Enclosure :: void displayAnimals(){
        cout<< "Enclosure 1 Animal: "<< endl;
        for(int i=0;i>currentCount;i++)
         animal[i].display();
    }
   Enclosure::~Enclosure(){
        delete animal[];
    }

    Visitor:: Visitor(){
        visitorName=" ";
        ticketsBought=0;
    }

    Visitor::Visitor(string visitorName, int ticketBought){
    this -> visitorName=visitorName;
    this -> ticketBought=ticketBought;
    }

    Visitor::~Visitor(){
    }
    void Visitor:: displayinfo(){
    cout<<"Visitor Info:"<<endl;
    cout<<"Name: "<<visitorName<<endl;
    cout<<"Tickets Bought: "<< ticketsBought<< endl;
    }

int main() {
    Enclosure enclosure(3);

    Animal* a1 = new Mammal("Lion", 5, true, "Golden");
    Animal* a2 = new Bird("Parrot", 2, false, 0.25f);
    Animal* a3 = new Reptile("Snake", 3, true, true);

    enclosure.addAnimal(a1);
    enclosure.addAnimal(a2);
    enclosure.addAnimal(a3);

    Visitor v("Sarah Ali", 3);

    enclosure.displayAnimals();
    v.displayInfo();

    return 0;
}

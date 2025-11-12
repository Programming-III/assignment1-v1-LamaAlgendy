#ifndef VISITOR_H
#define VISITOR_H

#include <iostream>
#include <string>
using namespace std;

class Visitor{
private:
    string visitorName;
    int ticketsBought;

public:
    Visitor();
    Visitor(string visitorName, int ticketBought);
    ~Visitor();
    void displayinfo();

};


#endif

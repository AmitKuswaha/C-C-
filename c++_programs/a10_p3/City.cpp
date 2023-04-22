/*
CH-230-A
a10_p3.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include "City.h"
using namespace std;

// Defining the methods 
void City::setName(string& newname){
    name = newname;
}

void City::setPop(int newpop) {
    pop = newpop;
}

void City::setMayor(string& newmayor) {
    mayor = newmayor;
}

void City::setArea(int newarea) {
    area = newarea;
}

void City::print() {
    cout << "This is " << name << " city. " << 
    "The total number of inhabitants is " << pop << ". " << mayor <<
    " is mayor of this city. " << "The total area of this city is "
    << area << "." << endl;
}

string City::getName() {
    return name;
}

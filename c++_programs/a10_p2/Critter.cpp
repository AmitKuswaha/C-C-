/*
CH-230-A
a10_p2.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
   name = newname;
}

void Critter::setHunger(int newhunger) {
   hunger = newhunger;
}

/* Defining setters of new properties */
void Critter::setBoredom(int newboredom) {
   boredom = newboredom;
}

void Critter::setHeight(double newheight) {
   height = newheight;
}


void Critter::print() {
   cout << "I am " << name << ". My hunger level is " << hunger << "."
   << " My boredom level is " << boredom << ". My height is " << height 
   << " inches." << endl;
} // Defining method to print all the existing and new properties

int Critter::getHunger() {
   return hunger;
}

/* Defining getters of new properties */
int Critter::getBoredom() {
   return boredom;
}


double Critter::getHeight() {
   return height;
}

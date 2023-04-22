/*
CH-230-A
a10_p5.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Critter.h"

using namespace std;
// Defining overloaded methods to convert double and int
double Critter::convert(int x) {
   double y = (double)x / 10;
   return y;
}

int Critter::convert(double x) {
   int y = int(x * 10);
   return y;
}



// Defining the constructors
Critter::Critter() {
    cout << "Empty constuctor called..." << endl;
    name = "default_critter";
    height = 5;
    boredom = 0;
    hunger = 0;
} // When there is no parameter

Critter::Critter(string newname) {
    cout << "Constructor with one parameter called..." << endl;
    name = newname;
    height = 5;
    boredom = 0;
    hunger = 0;
} // When there is only name parameter

Critter::Critter(string newname, int newhunger, int newboredom, 
         double newheight) {
    if (newheight == 10) {
        cout << "Constructor without " << 
            "height parameter(or with height 10) called..." << endl;
    }
    else if (newheight != 10) {
        cout << "Constructor with all parameters called..." << endl;
    }
    name = newname;
    hunger = convert(newhunger); // Converts newhunger to double
    boredom = newboredom;
    height = newheight;
} // When all parameters are passed
  // Also works if height parameter is not passed

void Critter::setName(string& newname) {
   name = newname;
}

void Critter::setHunger(int newhunger) {
   hunger = convert(newhunger); // Converts newhunger to double
}

/* Defining setters of new properties */
void Critter::setBoredom(int newboredom) {
   boredom = newboredom;
}

void Critter::setHeight(double newheight) {
   height = newheight;
}

void Critter::print() {
   cout << "I am " << name << ". My hunger level is " << convert(hunger) 
                                                //Convert hunger back to int
   << "." << " My boredom level is " << boredom << ". My height is " << height
   << " inches." << endl;
} // Defining method to print all the existing and new properties


int Critter::getHunger() {
   return convert(hunger); // Converts hunger back to int
}

/* Defining getters of new properties */
int Critter::getBoredom() {
   return boredom;
}

double Critter::getHeight() {
   return height;
}



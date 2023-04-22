/*
CH-230-A
a11_p1
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

// Defining Default constructor
Box::Box() {
    height = width = depth = 0;
}

// Defining constructor with parameter
Box::Box(double newheight, double newwidth, double newdepth) {
    height = newheight;
    width = newwidth;
    depth = newdepth;
}

// Defining copy constructor
Box::Box(const Box& cpy) {
    height = cpy.height;
    width = cpy.width;
    depth = cpy.depth;
}

// Destructor
Box::~Box(){
    cout << "Destructing" << endl; 
}

// Defining setters for the objects
void Box::setHeight(double newheight) {
    height = newheight;
}

void Box::setWidth(double newwidth) {
    width = newwidth;
}

void Box::setDepth(double newdepth) {
    depth = newdepth;
}

// Defining getters for the objects
double Box::getHeight() {
    return height;
}

double Box::getWidth() {
    return width;
}

double Box::getDepth() {
    return depth;
}

// Defining print
void Box::print() {
    cout << "Volume is " << (height * width * depth) << endl; 
}

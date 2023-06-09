/*
CH-230-A
a12_p8.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Square.h"

Square::Square(const char *n, double a) 
					: Rectangle(n, a, a) {
	sidesize = a;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return Rectangle::calcArea();
}

double Square::calcPeri() const {
	std::cout << "calcPerimeter of Square...";
	return Rectangle::calcPeri();
}

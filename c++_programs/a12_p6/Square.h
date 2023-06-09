/*
CH-230-A
a12_p8.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
	public:
		Square(const char *n, double a);
		~Square();
		double calcArea() const;
		double calcPeri() const;
	private:
		double sidesize;
};

#endif

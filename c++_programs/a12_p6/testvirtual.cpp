#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

/*
	Scheme of Inheritence:

		   Area				    //Base Class
			||
	------------------
	||				||
  Circle		 Rectangle	    //Circle and Rectangle are derived from Area
	||				||
   Ring	  		  Square	    //Ring is derived from Circle and Sqaure from Rectangle

*/
 
const int num_obj = 7;
int main() {
	Area *list[num_obj];						// (1)
	int index = 0;								// (2)
	double sum_area = 0.0;						// (3)
	double sum_peri = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN", 5, 6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout <<  "Creating square: ";
	Square pink_square("PINK", 5);
	list[0] = &blue_ring;						// (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &pink_square;
	while (index < num_obj) {					// (7)
		(list[index])->getColor();				
		double area = list[index++]->calcArea();// (8)
		sum_area += area;
	}
	// Calculating perimeter of the list 
	index = 0;
	while (index < num_obj) {					
		(list[index])->getColor();				
		double peri = list[index++]->calcPeri();
		sum_peri += peri;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)
	cout << "The total perimeter is "
			<< sum_peri << " units" << endl;
	return 0;
}

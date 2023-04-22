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
 
const int num_obj = 25;
int main() {		
	char *color[4] = {"RED", "BLACK", "VIOLET", "BLUE"};
	int rShape, rColor, rLen, rWid, rIrad, rOrad; 
	srand(static_cast <unsigned int> (time(0)));
	int index = 0;
	cout << endl;
	while (index < num_obj) { // Loops for 25 times
		rShape = rand() % 4; // Stores random number between 0 and 3 
		rColor = rand() % 4; // Stores random number between 0 and 3
		rLen = (rand() % 96) + 5; // Stores random number between 5 and 100
		rWid = (rand() % 96) + 5; // Stores random number between 5 and 100
		rIrad = (rand() % 96) + 5; // Stores random number between 5 and 100
		rOrad = (rand() % 96) + 5; // Stores random number between 5 and 100
		if (rShape == 0) { // Generates a circle
			cout << (index+1) << ") " << "Creating " << color[rColor]
			 << " Circle" << endl << endl;
			Circle circ(color[rColor], rOrad);
			cout << "\nThe perimeter is: " << circ.calcPeri() << endl;
			cout << "\nThe area is: " << circ.calcArea() << endl << endl;
		}
		else if (rShape == 1) { // Generates a ring
			if (rOrad < rIrad) { // When inner radius is greater than outer
				int a = rOrad;
				rOrad = rIrad;
				rIrad = a;
			} // swaps their values
			cout << (index+1) << ")" << "Creating " << color[rColor]
			 << " Ring" << endl << endl;
			Ring ri(color[rColor], rOrad, rIrad);
			cout << "\nThe perimeter is: " << ri.calcPeri() << endl;
			cout << "\nThe area is: " << ri.calcArea() << endl << endl;
		}
		else if (rShape == 2) { // Generates a rectangle
			cout << (index+1) << ")" << "Creating " << color[rColor]
			 << " Rectangle" << endl << endl;
			Rectangle rec(color[rColor], rLen, rWid);
			cout << "\nThe perimeter is: " << rec.calcPeri() << endl;
			cout << "\nThe area is: " << rec.calcArea() << endl << endl;
		}
		else if (rShape == 3) { // Generates a square
			cout << (index+1) << ")" << "Creating " << color[rColor]
			 << " Square" << endl << endl;
			Square sq(color[rColor], rLen);
			cout << "\nThe perimeter is: " << sq.calcPeri() << endl;
			cout << "\nThe area is: " << sq.calcArea() << endl << endl;
		}
		index++; // increases the counter
	}
	
	return 0;
}

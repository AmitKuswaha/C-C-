/*
CH-230-A
a11_p1.h
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    // Reading number of boxes
	cout << "Enter the number of boxes: ";
	int n;
	cin >> n;

	Box* rect; // Declaring an array of class
	rect = new Box[2*n]; // Allocating memory to the class
	double height, depth, width;

    int i;
	for (i = 0; i < n; i++) {
		cout << "Enter height of box " << i+1 << ": ";
		cin >> height;
		cout << "Enter width of box " << i+1 << ": ";
		cin >> width;
		cout << "Enter depth of box " << i+1 << ": ";
		cin >> depth;

		rect[i].setHeight(height);
		rect[i].setWidth(width);
		rect[i].setDepth(depth);
		cout << endl;
	} // Loops and sets the properties of n boxes

	for ( i = n; i < 2 * n; i++) {
		rect[i] = Box(rect[i - n]); // Calling copy constructor
	} // Loops and copies the properties to next n boxes

    cout << endl;

	for ( i = 0; i < 2 * n; i++) {
		cout << "Box " << i+1 << ": ";
        rect[i].print();
	} // Prints the voulme of each boxes

	
	delete [] rect;
	return 0;
}

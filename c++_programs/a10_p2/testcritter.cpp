/*
CH-230-A
a10_p2.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/



#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
	// Declaring new variables
	int boredom;
	double height;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
	// Reading the inputs and calling the new methods
	cout << "Boredom: ";
	cin >> boredom;
	c.setBoredom(boredom);
	cout << "Height(in.): ";
	cin >> height;
	c.setHeight(height);
	

	cout << "You have created:" << endl;
	c.print(); // Calling the print method
    return 0;
}

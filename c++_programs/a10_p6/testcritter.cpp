/*
CH-230-A
a10_p5.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
    // Reading the inputs
    string name;
    int hunger, boredom;
    double height;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter hunger: ";
    cin >> hunger;
    cout << "Enter boredom: ";
    cin >> boredom;
    cout << "Enter height: ";
    cin >> height;

    // Fours instances of constructors
	Critter c;
    Critter c1(name);
    Critter c2(name, hunger, boredom);
    Critter c3(name, hunger, boredom, height);

    // Setting the hunger level to 2
    cout << "Setting hunger level to 2" << endl;
    c.setHunger(2);
    c1.setHunger(2);
    c2.setHunger(2);
    c3.setHunger(2);

	cout << "You have created:" << endl;
	c.print(); // Calling the print method
    c1.print(); // Calling the print method
    c2.print(); // Calling the print method
    c3.print(); // Calling the print method
    
    // Adding a class with five properties
    Critter c4("Ram", 3, 4, 5.9, 5);
    c4.print();
    return 0;
}

/*
CH-230-A
a10_p3.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "City.h"

using namespace std;

int main() {

    City c[3]; // Declaring an array of class
    // Declaring the variables
    string name[3] = {"Bremen", "Paris", "London"};
    int pop;
    string mayor;
    int area;
    
    int i;
    for (i = 0; i != 3; i++) {
        c[i].setName(name[i]);
        cout << "Enter data for " << c[i].getName() << endl;
        cout << "Number of inhabitants: ";
        cin >> pop;
        c[i].setPop(pop);

        getchar();
        cout << "Mayor: ";
        getline(cin, mayor);
        c[i].setMayor(mayor);
       
        cout << "Area: ";
        cin >> area;
        c[i].setArea(area);
    } // Reads input for 3 instances of classes

    // Printing the classes
    cout << "You have created: " << endl;
    c[0].print();
    c[1].print();
    c[2].print();
    return 0;
}

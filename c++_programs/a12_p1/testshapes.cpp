/*
CH-230-A
a12_p1
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include "Shapes.h"

using namespace std;

int main() {
    
    // Creating three instances of hexagon class
    Hexagon h1("First Hexagon", 3, 3, 9, "Blue");
    Hexagon h2("Second Hexagon", 3, 3, 15, "Green");
    Hexagon h3(h2); // Copy constructor
    
    // Printing the area and perimeter of the hexagons
    h1.print();
    h2.print();
    h3.print();
    return 0;
}

/*
CH-230-A
a12_p5
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction f1;
	Fraction f2;
    Fraction f3;
    Fraction f4;
    Fraction f5;
    Fraction f6;
    /* Reading two fractions with overloaded operator >> */
	cout << "Enter first fraction a: ";
	cin >> f1;
    
	cout << "Enter second fraction b: ";
	cin >> f2;
    
    /* Printing output with overloaded operator << */
    cout << f1;
    cout << f2;
    cout << (f3 = (f1 * f2)); 
        // Computes multiplication of fraction with overloaded operator *
    cout << (f4 = f1 / f2);
        // Computes multiplication of fraction with overloaded operator /
    cout << (f5 = f1 + f2);
        // Computes addition of fraction with overloaded operator +
    cout << (f6 = f1 - f2);
        // Computes subtraction of fraction with overloaded operator -
    
    /* Computing the greater fraction and printing on the screen */
    if (!(f1 > f2) && !(f1 < f2)) {
        cout << "Both Fraction are equal" << endl;
    }
    else if (f1 > f2) {
        cout << "Greater fraction is: " << f1 << endl;
    }
    else
        cout << "Greater fraction is: " << f2 << endl;
    
}

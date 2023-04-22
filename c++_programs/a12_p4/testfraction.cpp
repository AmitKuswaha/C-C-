/*
CH-230-A
a12_p4
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
    
}

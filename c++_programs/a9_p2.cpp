/*
CH-230-A
a9_p2.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main() {
    /* Declaring the variables */
    int n;
    double x;
    char s[100];
    cout << "Enter an integers: ";
    cin >> n; // Reads the integer
    cout << "Enter a double: ";
    cin >> x; // Reads the double
    cout << "Enter a string: ";
    cin >> s; // Reads the string
    int i;
    for (i = 1; i <= n; i++) {
        cout << s; // Prints the string
        cout << " : "; // Prints the symbol
        cout << x << endl; // Prints the double and newline
    }
    return 0;
}

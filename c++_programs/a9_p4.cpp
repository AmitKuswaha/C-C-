/*
CH-230-A
a9_p4.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
/* Declaring and defining a function to print diffrence of two integers */
void mycount(int n1, int n2) {
    cout << (n2 - n1) << endl; 
        // Prints difference between second and first integer
}

/* Declaring and defining a function to count a character in a string */
void mycount(char a, string h) {
    unsigned int i;
    int c = 0; // Initializing a counter
    for (i = 0; h[i] != '\0'; i++) {
        if ( h[i] == a ) {
            c++; // Increases the counter
        } // Executes when the character matches
    } // Loops until the last character of string
    cout << c; // Prints the value of variable c
}

int main() {
    /* Calling the function with examples */
    mycount(7, 4);
    mycount('i', "this is a string\0");

    /* Reading two integers and calling the function */
    int num1, num2;
    cout << endl << "Enter two integers: " << endl;
    cin >> num1 >> num2; // Reads two integers
    mycount(num1, num2); // Calls the function with integer parameters
    
    /* Reading a character and a string and calling the function */
    cout << "Enter a character and a string: " << endl;
    char c;
    string s;
    cin >> c; // Reads a character
    getchar();
    getline(cin, s); // Reads a string
    mycount(c, s); // Calls the function with character and string parameters 
    return 0;
}


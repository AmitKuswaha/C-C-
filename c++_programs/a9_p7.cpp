/*
CH-230-A
a9_p7.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
using namespace std;
void swapping(int &num1, int &num2) {
    int med = num1;
    num1 = num2;
    num2 = med;
} // swap ints
void swapping(float &num1, float &num2) {
    float med = num1;
    num1 = num2;
    num2 = med;
} // swap floats
void swapping(const char *&ele1, const char *&ele2) {
    const char *med = ele1;
    ele1 = ele2;
    ele2 = med;
} // swap char pointers

int main(void) {

    /* Declaring and initializing the variables */
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    /* Calling the overloaded function swapping with different parameters */
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    /* Printing the new values */
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

return 0;
}

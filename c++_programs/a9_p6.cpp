/*
CH-230-A
a9_p6.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>

using namespace std;
/* Declaring and defining a function to return first positive and even value */
int myfirst(int a[5]) {
    int i;
    for(i = 0; i != 5; i++) {
        if ((a[i] > 0) && (a[i] % 2) == 0) {
            return a[i];
        }
    }
    return -1;
}

/* Declaring and defining a function to return first negative element 
    without fractional part */
double myfirst(double a[5]) {
    int i;
    for(i = 0; i != 5; i++) {
        if ((a[i] < 0) && (a[i] - (int)a[i]) == 0) {
            return a[i];
        }
    }
    return -1.1;
}

/* Declaring and defining a function to return first consonant*/
char myfirst(char a[5]) {
    int i;
    for(i = 0; i != 5; i++) {
        if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o'
        && a[i] != 'u' && a[i] != 'A' && a[i] != 'E' && a[i] != 'I'
        && a[i] != 'O' && a[i] != 'U') {
            if (((int)a[i] >= 65 && (int)a[i] <= 90) ||
            ((int)a[i] >= 97 && (int)a[i] <= 122)) {
               return a[i];
            }
        }
    }
    return '0';
}

/* Checking the overloaded functions */
int main() {

    cout << "Enter 5 integers: " << endl;
    int num[5];
    int i;
    for(i = 0; i != 5; i++) {
        cin >> num[i];
    } // Reads five integers
    
    cout << "First positive and even value: " << myfirst(num) << endl;
            // Calling the overloaded function myfirst with array of integers
    
    cout << "Enter 5 doubles: " << endl;
    double doub[5];
    for(i = 0; i != 5; i++) {
        cin >> doub[i];
    } // Reads five doubles

    cout << "First negative element without fractional part: " 
        << myfirst(doub) << endl;
            // Calling the overloaded function myfirst with array of doubles

    cout << "Enter 5 characters: " << endl;
    char ele[5];
    for(i = 0; i != 5; i++) {
        cin >> ele[i];
    } // Reads five characters

    cout << "First consonant element is: " << myfirst(ele) << endl;
            // Calling the overloaded function myfirst with array of characters

    return 0;
}

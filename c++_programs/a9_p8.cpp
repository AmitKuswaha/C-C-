/*
CH-230-A
a9_p8.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
using namespace std;

void subtract_max(int *p, int n) {
    int i;
    int c = p[0];
    for(i = 1; i != n; i++) {
        if (c < p[i]) {
            c = p[i];
        }
    }
    cout << "The values after subtracting from maximum: " << endl; 
    for(i = 0; i != n; i++) {
        p[i] = c - p[i];
        cout << p[i] << endl;
    }

}

void deallocate(int *p) {

    delete[] p;
}

int main() {

    int n;
    cout << "Enter an integer: " << endl;
    cin >> n;
    int *arr = new int(n);
    if (!arr) {
        cout << "Memory allocation failed" << endl;
        exit(1);
    }
    int i;
    cout << "Enter " << n << " elements: " << endl;
    for(i = 0; i != n; i++) {
        cin >> arr[i];
    } // Reads five integers

    subtract_max(arr, n);
    deallocate(arr);
    return 0;
}

/*
CH-230-A
a11_p6
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

/* Defining the constructors */
Vector::Vector() { 
    size = 4;
    ptr = new double[size];
    int i;
    for (i = 0; i != size; i++) {
        ptr[i] = 1;
    }
} // Empty constructors

Vector::Vector(int newsize, double* newptr) {
    size = newsize;
    newptr = new double[newsize];
    ptr = newptr;
    int i;
    for (i = 0; i != size; i++) {
        cin >> ptr[i];
    }
} // Constructor with parameters

Vector::Vector(const Vector& cpy) {
    double *n = new double[cpy.size];
    n = cpy.ptr;
    size = cpy.size;
    ptr = n;
} // Copy Constructor

/* Defining the destructors*/
Vector::~Vector() {
    cout << "Destructing Vector" << endl;
}

/* Defining the methods for norm, add, difference and product */
double Vector::norm() {
    int i;
    double s = 0;
    for (i = 0; i != size; i++ ) {
        s = s + (ptr[i] * ptr[i]);
    }
    s = pow(s, 0.5);
    return s;
} // Calculates and returns the norm

Vector Vector::add(const Vector a) const{
    if (size != a.size) {
        cout << "Error!! Can't be added" << endl;
        exit(1);
    }
    int n = size;
    Vector sum;
    int i;
    for (i = 0; i != n; i++) {
        sum.ptr[i] = ptr[i] + a.ptr[i]; 
    }
    return sum;
} // Calculates and returns the sum vector

Vector Vector::difference(const Vector c) const{
    if (size != c.size) {
        cout << "Error!! Can't be substracted" << endl;
        exit(1);
    }
    int n = size;
    Vector substract;
    int i;
    for (i = 0; i != n; i++) {
        substract.ptr[i] = ptr[i] - c.ptr[i];
    }
    return substract;
} // Calculates and returns the difference vector

double Vector::sca_prod(const Vector b) const{
    double d = 0;
    if (size != b.size) {
        cout << "Error!! Can't be multiplied" << endl;
        exit(1);
    }
    int i;
    for (i = 0; i != size; i++) {
        d += (ptr[i] * b.ptr[i]);
    }
    return d;
} // Calculates and returns the scalar product

/* Defining the setter for the properties */
void Vector::setSize(int newsize) {
    delete ptr; // Releasing the memory of old pointer
    size = newsize;
    ptr = new double[size];
}

void Vector::setPtr(double *newptr) {
    ptr = newptr;
}

/* Defining the getter for the properties */
int Vector::getSize() const{
    return size;
}

double* Vector::getPtr() const{
    return ptr;
}

/* Defining the print method */
void Vector::print() const {
    int i;
    for (i = 0; i != size; i++) {
        cout << ptr[i] << endl;
    }
}

/*
CH-230-A
a11_p6
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Vector {
    private: // Declaring the properties
        int size;
        double *ptr;
    public: 
        /* Declaring the constructors */
        Vector();
        Vector(int, double*);
        Vector(const Vector&);
        /* Declaring the destructor */
        ~Vector();
        /* Declaring the methods for norm, add, difference and product */
        double norm();
        Vector add(const Vector) const;
        Vector difference(const Vector) const;
        double sca_prod(const Vector) const;
        /* Declaring the setter for the properties */
        void setSize(int newsize);
        void setPtr(double* newptr);
        /* Declaring the getter for the properties */
        int getSize() const;
        double* getPtr() const;
        /* Declaring the print method */
        void print() const; 
};



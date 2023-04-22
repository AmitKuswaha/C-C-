/*
CH-230-A
a11_p6
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include "Vector.h"

using namespace std;

int main() {
    /* Creating empty constructor */
    Vector v0;
    
    
    double q[4];
    cout << "Enter the components of first parametric vector v1: " << endl;
    Vector v1(4, q); // First vector with parameters 
    
    
    Vector v2(v1); // Copy constructor called
    

    cout << "Enter the components of second parametric vector v3: " << endl;
    Vector v3(4, q); // Second vector with parameters
    
    /* Printing the components of the all the vectors */
    cout << "The components of vector v0 is: " << endl;
    v0.print();
    cout << "The components of vector v1 is: " << endl;
    v1.print();
    cout << "The components of vector v2 is:" << endl;
    v2.print();
    cout << "The components of vector v3 is: " << endl;
    v3.print();

    /* Printing the norm of all the vectors */
    cout << "The norm of the vector v0 is " << v0.norm() << endl;
    cout << "The norm of the vector v1 is " << v1.norm() << endl;
    cout << "The norm of the vector v2 is " << v2.norm() << endl;
    cout << "The norm of the vector v3 is " << v3.norm() << endl;

    /* Printing the scalar product, sum and difference of parametric vectors */
    cout << endl << "The scalar product of v1 and v3 is: " << v1.sca_prod(v3)
    << endl;

    cout << endl << "The components of sum of vector v1 and v3 is: " << endl;
    v1.add(v3).print();
    
    cout << endl << "The components of difference of vector v1 and v3 is: "
    << endl;
    v1.difference(v3).print();
    
    
    
    return 0;
}

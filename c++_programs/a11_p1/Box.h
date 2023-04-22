/*
CH-230-A
a11_p1
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
using namespace std;

class Box { 
    private: /* data */
        double height;
        double width;
        double depth;
    public: /* args */
        // Constructors
        Box();
        Box(double, double, double);
        Box(const Box&);
        ~Box();

        // Declaring the setters    
        void setHeight(double newheight);
        void setWidth(double newwidth);
        void setDepth(double newdepth);
        // Declaring the getters

        double getHeight();
        double getWidth();
        double getDepth();

        void print();


};


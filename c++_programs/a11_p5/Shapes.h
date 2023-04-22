/*
CH-230-A
a11_p5
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	protected:   			// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
        void setName(std::string& newname);
        std::string getName();
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name
        ~Shape();  
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
        void setX(double nx);
        void setY(double ny);
        double getX();
        double getY();
		CenteredShape(const std::string&, double, double); 
             // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	
            // moves the shape, i.e. it modifies it center
        ~CenteredShape();
};

class RegularPolygon : public CenteredShape { 
        // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
        void setEnum(int nEnum);
        int getEnum();
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
        ~RegularPolygon();
};

class Circle : public CenteredShape {  
        // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
        void setRadius(double newRad);
        double getRadius();
        double perimeter();
        double area();
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
        void print();
        ~Circle();
};

class Rectangle : public RegularPolygon {
    private:
        double length;
        double breadth;
    public:
        void setLength(double newlength);
        void setBreadth(double newbreadth);
        double getLength();
        double getBreadth();
        double perimeter();
        double area();
        Rectangle(const std::string&, double, double, double, double);
        Rectangle();
        Rectangle(const Rectangle&);
        void print();
        ~Rectangle();
};

class Square : public Rectangle {
    private:
        double sidesize;
    public:
        void setSsize(double newssize);
        double getSsize();
        double perimeter();
        double area();
        Square(const std::string&, double, double, double);
        Square();
        Square(const Square&);
        void print();
        ~Square();
};
    
#endif

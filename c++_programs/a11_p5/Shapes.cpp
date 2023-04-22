/*
CH-230-A
a11_p5
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std; 

/* Defining constructors with parameters for all classes */
Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) {
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
    CenteredShape(n,nx,ny) {
	Radius = r;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth,
    double nheight) : RegularPolygon(n, nx, ny, 4) {
    length = nwidth;
    breadth = nheight;
} 

Square::Square(const string& n, double nx, double ny, double nside) :
    Rectangle(n, nx, ny, nside, nside) {
        sidesize = nside;
}


/* Defining the default constructors for all parent and derived classes*/
Shape::Shape() : name("default") {
    cout << "Shape Default constructor" << endl;
}

CenteredShape::CenteredShape() : Shape(), x(0), y(0) {
    cout << "CenteredShape Default constructor" << endl;
}

RegularPolygon::RegularPolygon() : CenteredShape(), EdgesNumber(4) {
    cout << "RegularPolygon Default constructor" << endl;
}

Circle::Circle() : CenteredShape(), Radius(1) {
    cout << "CenteredShape Default constructor" << endl;
}

Rectangle::Rectangle() : RegularPolygon(), length(1), breadth(1) {
    cout << "Rectangle Default constructor" << endl;
}

Square::Square() : Rectangle(), sidesize(1) {
    cout << "Square Default constructor" << endl;
}


/* Defining the copy constructors for all classes */
Shape::Shape(const Shape& s) {
    name = s.name;
}

CenteredShape::CenteredShape(const CenteredShape& c) {
    x = c.x;
    y = c.y;
}

RegularPolygon::RegularPolygon(const RegularPolygon& r) {
    EdgesNumber = r.EdgesNumber;
}

Circle::Circle(const Circle& ci) {
    Radius = ci.Radius;
}

Rectangle::Rectangle(const Rectangle& rec) {
    length = rec.length;
    breadth = rec.breadth;
}

Square::Square(const Square& sq) {
    sidesize = sq.sidesize;
}


/* Defining the destructors of all the classes */
Shape::~Shape() {}

CenteredShape::~CenteredShape() {}

RegularPolygon::~RegularPolygon() {}

Circle::~Circle() {}

Rectangle::~Rectangle() {}

Square::~Square() {}


/* Defining method to return perimeter and area */
double Circle::area() {
    double ar = M_PI * Radius * Radius;
    return ar;
}

double Circle::perimeter() {
    double peri = 2 * Radius * M_PI;
    return peri;
}

double Rectangle::area() {
    double ar = length * breadth;
    return ar;
}

double Rectangle::perimeter() {
    double peri = 2 * (length + breadth);
    return peri;
}

double Square::area() {
    double ar = sidesize * sidesize;
    return ar;
}

double Square::perimeter() {
    double peri = 4 * sidesize;
    return peri;
}

/* Defining print method for circle, rectangle and square class */
void Circle::print() {
    cout << "Perimeter of " << name << ": " << perimeter() << endl
    << "Area of " << name << ": " << area() << endl; 
}

void Rectangle::print() {
    cout << "Perimeter of " << name << ": " << perimeter() << endl
    << "Area of " << name << ": " << area() << endl; 
}

void Square::print() {
    cout << "Perimeter of " << name << ": " << perimeter() << endl
    << "Area of " << name << ": " << area() << endl; 
}



/* Defining the setters for the parent and derived classes */
void Shape::setName(string& newName) {
    name = newName;
}

void CenteredShape::setX(double nx) {
    x = nx;
}

void CenteredShape::setY(double ny) {
    y = ny;
}

void RegularPolygon::setEnum(int nEnum) {
    EdgesNumber = nEnum;
}

void Circle::setRadius(double newRad) {
    Radius = newRad;
}

void Rectangle::setLength(double newlength) {
    length = newlength;
}

void Rectangle::setBreadth(double newbreadth) {
    breadth = newbreadth;
}

void Square::setSsize(double newssize) {
    sidesize = newssize;
}


/* Defining getters for the parent and derived classes*/
string Shape::getName() {
    return name;
}

double CenteredShape::getX() {
    return x;
}

double CenteredShape::getY() {
    return y;
}

int RegularPolygon::getEnum() {
    return EdgesNumber;
}

double Circle::getRadius() {
    return Radius;
}

double Rectangle::getLength() {
    return length;
}

double Rectangle::getBreadth() {
    return breadth;
}

double Square::getSsize() {
    return sidesize;
}

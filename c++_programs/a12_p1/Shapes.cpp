/*
CH-230-A
a11_p5
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include <string>
#include "Shapes.h"

using namespace std; 

/* Defining the default constructors for all parent and derived classes*/
Shape::Shape() : name("default") {}

CenteredShape::CenteredShape() : Shape(), x(0), y(0) {}

RegularPolygon::RegularPolygon() : CenteredShape(), EdgesNumber(6) {}

Circle::Circle() : CenteredShape(), Radius(1) {}

Hexagon::Hexagon() : RegularPolygon(), side(1), color("default") {}

/* Defining constructors with parameters for all classes */
Shape::Shape(const string& n) : name(n) {}

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

Hexagon::Hexagon(const string& n, double nx, double ny, double ns, 
    const string& cl) : RegularPolygon(n, nx, ny, 6) {
	side = ns;
	color = cl;
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

Hexagon::Hexagon(const Hexagon& cpy) {
	side = cpy.side;
	color = cpy.color;
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

void Hexagon::setSide(double newside) {
	side = newside;
}

void Hexagon::setColor(string& newcolor) {
	color = newcolor;
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

double Hexagon::getSide() const {
	return side;
}

string Hexagon::getColor() const {
	return color;
}

/* Defining the destructors of all the classes */
Shape::~Shape() {}

CenteredShape::~CenteredShape() {}

RegularPolygon::~RegularPolygon() {}

Circle::~Circle() {}

Hexagon::~Hexagon() {}

/* Defining the methods to calculate area and perimeters */
double Hexagon::area() const {
	double ar = ((3.0 * pow(3, 0.5) * side * side) / 2.0);
	return ar;
}

double Hexagon::perimeter() const {
	double pr = 6.0 * side;
	return pr;
}

/* Defining the print method */
void Hexagon::print() const{
    cout << "Perimeter of " << color << " Hexagon: " << perimeter() << endl
    << "Area of " << color << " Hexagon: " << area() << endl; 
}

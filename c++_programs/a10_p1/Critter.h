/*
CH-230-A
a10_p1.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

/* Explanation:
If we comment out "using namespace std;" from the program,
Multiple errors of the form "use of undeclared identifier" and 
"unknown type name" takes place, 
This is because it works as  an identifier for the
keywords like cout, cin, endl, and string.

As an alternative solution, we can use std:: before every such keywords.

And if we remove critter:: from critter.cpp, the error of the form "use of
undeclared identifier" takes place,
This is because compiler doesn't find the declaration of relevant method.

As an alternative solution, we can directly define those methods within the
class declaration in the header file.

*/

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	int age;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setHeight(double newheight);
	void setAge(int newage);
	// getter method
	int getHunger();
	// service method
	void print();
};

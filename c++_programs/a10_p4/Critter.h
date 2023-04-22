/*
CH-230-A
a10_p4.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <string>
using namespace std;

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;

public: // business logic methods are public
    
    // Adding three constructors
    Critter();
    Critter(string);
    Critter(string, int, int, double = 10); 
            // Sets a default value to last parameter if not specified
	
    // setter methods
	void setName(string& newname);
	void setHunger(int newhunger);
	
    // Adding setter methods for new properties
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	
    // getter method
	int getHunger();
	
    // Adding getter methods for new properties
	int getBoredom();
	double getHeight();

    // service method
	void print();
};

/*
CH-230-A
a10_p5.cpp
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
	double hunger;
	int boredom;
	double height;
	double thirst; // Adding new property thirst
	// Declaring methods to convert double and int
	double convert(int newhunger);
	int convert(double newhunger);
	

public: // business logic methods are public
    
    // Adding three constructors
    Critter();
    Critter(string);
    Critter(string, int, int, double = 10); 
	// Adding constructor with five properties
	Critter(string, int, int , double, double);
            // Sets a default value to last parameter if not specified
	
    // setter methods
	void setName(string& newname);
	void setHunger(int newhunger);
	void setThirst(double newthirst);
	
    // Adding setter methods for new properties
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	
    // getter method
	int getHunger();
	
    // Adding getter methods for new properties
	int getBoredom();
	double getHeight();
	double getThirst();


    // service method
	void print();
};

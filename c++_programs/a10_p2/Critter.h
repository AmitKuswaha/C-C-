/*
CH-230-A
a10_p2.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
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

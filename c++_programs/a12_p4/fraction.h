/*
CH-230-A
a12_p4
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
    // Declaring overloaded operators * and /
	friend Fraction operator * (const Fraction&, const Fraction&);
	friend Fraction operator / (const Fraction&, const Fraction&);

	// Declaring overloaded operators << and >>
	friend std::ostream& operator <<(std::ostream& out, const Fraction &);
	friend std::istream& operator >>(std::istream& in, Fraction &);

	void print();				// prints it to the screen
};



#endif /* FRACTION_H_ */

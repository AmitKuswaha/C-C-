/*
CH-230-A
a12_p5
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}

/* Overloaded operators */
/* Using << for print */
std::ostream& operator<<(std::ostream& out, const Fraction &f)
{
	if (f.num == 0 || f.den == 1)
	{
		out << f.num << std::endl; //output fraction in simpler form
		return out;
	}
	else
	{
		out << f.num << "/" << f.den << std::endl;
		return out;
	}
	
}

/* Using * for multiplication of two fractions */
Fraction operator * (const Fraction& a, const Fraction& b)
{
	Fraction res(a.num * b.num, a.den * b.den);
	return res;
}

/* Using / division of two fractions */
Fraction operator / (const Fraction& a, const Fraction& b)
{
	if(b.num == 0) //divisor cannot be 0
	{
		std::cout << "Error! Cannot divide by 0!"<< std::endl;;
		exit(1);
	} 
	Fraction res(a.num * b.den, a.den * b.num);
	return res;
}

/* Using >> for reading the fraction */
std::istream& operator >>(std::istream& in, Fraction &f)
{
	in >> f.num;
	getchar();
	in >> f.den;
	getchar();
	if (f.den == 0) //denominator cannot be 0
	{
		std::cout << "Invalid Fraction!" << std::endl;
		exit(2);
	}
	return in;

}

/* Using + and - for adding and subtracting fractions */
Fraction Fraction::operator +(const Fraction& add)
{
	int newnum = (this->num * this->lcm(this->den, add.den)/this->den) +
				 (add.num * this->lcm(this->den, add.den)/add.den);
	int newden = this->lcm(this->den, add.den);
	return Fraction(newnum, newden);
}

Fraction Fraction::operator -(const Fraction& sub)
{
	int newnum = (this->num * this->lcm(this->den, sub.den)/this->den) -
				 (sub.num * this->lcm(this->den, sub.den)/sub.den);
	int newden = this->lcm(this->den, sub.den);
	return Fraction(newnum, newden);
}

/* Using = for equalling the value */
Fraction& Fraction::operator =(const Fraction& frac)
{
	this->num = frac.num;
	this->den = frac.den;
	return *this;
}
/* Using > and < for comparison */
bool operator > (Fraction& frac1, Fraction& frac2)
{
	return ((frac1 - frac2).num > 0 && (frac1 - frac2).den > 0);
	
}

bool operator < (Fraction& frac1, Fraction& frac2)
{
	return ((frac1 - frac2).num < 0 || (frac1 - frac2).den < 0);	
}




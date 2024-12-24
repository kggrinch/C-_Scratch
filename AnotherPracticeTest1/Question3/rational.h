#ifndef RATIONAL_H_
#define RATIONAL_H_
#include <iostream>

class Rational
{
public:
	Rational();
	Rational(int num);
	Rational(int num, int den);
	
	// setters
	void set_num(const int num);
	void set_den(const int den);
	void set_values(const int num, const int den);

	// getters
	int num() const;
	int den() const;

	// overloaded methods
	Rational operator+(Rational& other) const;
	
	Rational& operator+=(Rational& other);

private:
	int num_;
	int den_;
};


#endif	
#include "rational.h"
#include <iostream>

Rational::Rational()
{
  num_ = 1;
  den_ = 1;
}
Rational::Rational(int num)
{
  num_ = num;
  den_ = 1;
}
Rational::Rational(int num, int den)
{
  num_ = num;
  den_ = den;
}



Rational Rational::operator+(Rational& other) const
{
	return Rational(num_ * other.den_ + den_ * other.num_, den_ * other.den_);
}
	
Rational& Rational::operator+=(Rational& other)
{
this->num_ = 	num_ * other.den_ + den_ * other.num_;
this->den_ = den_ * other.den_;
return *this;
}

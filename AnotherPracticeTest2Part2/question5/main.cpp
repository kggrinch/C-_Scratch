#include <cmath>
#include<algorithm>

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const
{
	return ComplexNumber( (a*other.a) - (b * other.b) ,  (b * other.a) + (a * other.b) );
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber& other) const
{	
return ComplexNumber( ( (b * other.a) + (a * other.b) ) / ( std::pow(other.a, 2) + std::pow(other.b, 2) )  , ( (b * other.a) - (a * other.b) )  / ( std::pow(other.a, 2) + std::pow(other.b, 2) ) );
}

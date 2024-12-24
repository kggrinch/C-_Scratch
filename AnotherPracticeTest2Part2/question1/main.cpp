#include<iostream>
#include<string>

int sum_digits(int value, std::string& digit, int& result, int index)
{
	digit = std::to_string(value);
	
	if(index > digit.size())
	{
		return result;
	}
else
{
	result += digit[index] - '0';
	sum_digits(value, digit, result, index + 1);
}
}

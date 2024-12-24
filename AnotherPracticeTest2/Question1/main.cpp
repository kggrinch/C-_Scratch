#include <iostream>
#include <cmath>


int gcd(int a, int b)
{
if(b == 0)
{
	return a;
}
else
{
	return gcd(b, a%b);
}
} 



int main()
{
  int x = 0;
  x = gcd(18, 48);
  std::cout << x << "\n";

  // GCD = 35. Recursion gets called 8 times
}
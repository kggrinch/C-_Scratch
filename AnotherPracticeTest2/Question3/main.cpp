#include <iostream>
#include <string>
#include <algorithm>

bool reverses(std::string& result)
{
	std::reverse(result.begin(), result.end());
	return true;
}

bool conversion(int value, int base, std::string& result)
{
std::string static kDigital = "0123456789ABCDEF";
if(value < 0 || base < 2 || base > 16)
{
return;
}

if(value < base)
{
result += kDigital[value];
}
else
{
result += kDigital[value % base];
return conversion(value/base, base, result);
}

reverses(result);
return true;
}


bool toDecimal(std::string value, int base, int& result, int index = 0) // Converst a given conversino type back to decimal
{
  std::string static kDigitalArray = "0123456789ABCDEF";
  if(base < 2 || base > 16)
  {
    return false;
  }

  if(index == value.size())
  {
    return true;
  }

  char digitChar = value[index];
  int digitValue = -1;

  for(int i = 0; i < kDigitalArray.size(); i++)
  {
    if(kDigitalArray[i] == digitChar)
    {
      digitValue = i;
      break;
    }
  }

  if(digitValue == -1 || digitValue >= base)
  {
    return false;
  }

  result += digitValue * std::pow(base, value.size()-1-index);

  return toDecimal(value, base, result, index + 1);
}




int main()
{

  // Binary:      base = 2
  // Octal:       base = 8
  // Hexadecimal: base = 16

  std::string answer = "";
  int value = 26;
  int base = 8;
  conversion(value, base, answer);
  std::reverse(answer.begin(), answer.end());
  std::cout << answer << "\n";

  int result = 0;
  toDecimal(answer, base, result, 0);
  std::cout << result << "\n";


  /*
  Hex
4537 / 16 = 283 R 9
283 / 16 = 17 R 11
17 / 16 = 1 R 1
1 / 16 = 0 R 1

= 1 1 11 9
= [1 1 B 9]

Octal
4537 / 8 = 567 R 1
567 / 8 = 70 R 7
70 / 8 = 8 R 6
8 / 8 = 1 R 0
1 / 8 = 0 R 1

= [1 0 6 7 1]

Binary
4537 / 2 = 2268 R 1
2268 / 2 = 1134 R 0
1134 / 2 = 567 R 0
567 / 2 = 283 R 1
283 / 2 = 141 R 1
141 / 2 = 70 R 1
70 / 2 = 35 R 0
35 / 2 = 17 R 1
17 / 2 = 8 R 1
8 / 2 = 4 R 0
4 / 2  = 2 R 0
2 / 2 = 1 R 0
1 / 2 = 0 R 1

= [1000110111001]
*/

}
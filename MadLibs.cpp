#include <iostream>

using namespace std;

int main()
{

  string color, pluralNoun, food;

  cout << "Enter a color: ";
  getline(cin, color);
  
  cout << "Enter a plural noun: ";
  getline(cin, pluralNoun);

  cout << "Enter food: ";
  getline(cin, food);
  
  cout << "Roses are " << color << endl;
  cout << pluralNoun << " are blue" << endl;
  cout << "I want " << food << endl;
  
  return 0;
}
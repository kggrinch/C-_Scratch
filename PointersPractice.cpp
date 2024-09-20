#include <iostream>

void printValue(int &value)
{
    value = 22;
    std::cout << value << '\n';
};


int main()
{

    int age = 21;

    int *pAge = &age;

    std::cout << pAge << '\n';

    std::cout << &pAge << '\n';

    printValue(*pAge);
    std::cout << *pAge << '\n';


    return 0;
}


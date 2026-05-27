#include <iostream>
#include "fraction.h"

int main()
{
    Fraction a(3,6);
    std::cout<<a.to_string()<< "\n";
    return 0;
}

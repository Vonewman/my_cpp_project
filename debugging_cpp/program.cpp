#include <iostream>
#include <algorithm>

int getValue()
{
    std::cerr << "getValue() called\n";
    return 4;
}

int main() 
{
    std::cerr << "main() called\n";
    std::cout << getValue();

    return 0;
}
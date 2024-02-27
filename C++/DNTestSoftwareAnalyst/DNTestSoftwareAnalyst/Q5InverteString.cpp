#include "Q5InverteString.h"
#include <iostream>

std::string ReverseString::reverseString(std::string str)
{
    std::string reverseStr = "";
    std::string::reverse_iterator it = str.rbegin();

    for (it; it != str.rend(); ++it)
        reverseStr += *it;

    return reverseStr;
}

void ReverseString::header()
{
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Reverse String" << std::endl;
}

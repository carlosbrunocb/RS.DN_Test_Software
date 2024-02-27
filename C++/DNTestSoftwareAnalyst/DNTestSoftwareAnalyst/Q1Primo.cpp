#include "Q1Primo.h"
#include <iostream>


bool Primo::primo(int num, int den)
{
    den--;
    if (den < 2) return true;
    if ((num % den) == 0) return false;

    return primo(num, den);
}

void Primo::header()
{
    std::cout << std::endl;
    std::cout << "Prime Number" << std::endl;
}

void Primo::menu(int &number)
{
    std::cout << std::endl;
    std::cout << "Enter a number:" << std::endl;
    std::cin >> number;
}



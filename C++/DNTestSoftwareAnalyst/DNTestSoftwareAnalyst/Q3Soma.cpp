#include "Q3Soma.h"
#include "Q1Primo.h"
#include "Q2Palindromo.h"
#include <iostream>

int SomaPP::sumPP(int num[], int size)
{
    int sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (Primo::primo(i, i) || Palindrome::palindrome(i)) sum += num[i];
	}

    return sum;
}

void SomaPP::header()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Sum of Integer Array Values with index in Palindromic and Prime Position" << std::endl;
}

#include "Q2Palindromo.h"
#include <iostream>

int Palindrome::reverseNumber(int num)
{
	int reversedNumber = 0, remainder;

	while (num != 0) {
		remainder = num % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		num /= 10;
	}

	return reversedNumber;
}

bool Palindrome::palindrome(int num)
{
	int reverseNum = reverseNumber(num);
	
	if (num == reverseNum) return true;

	return false;
}

void Palindrome::header()
{
	std::cout << std::endl; 
	std::cout << std::endl;
	std::cout << "Palindrome Number" << std::endl;
}

void Palindrome::menu(int& number)
{
	std::cout << std::endl;
	std::cout << "Enter a number:" << std::endl;
	std::cin >> number;
}

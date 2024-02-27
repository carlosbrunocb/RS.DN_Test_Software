#include "Q6CodeRun.h"
#include <iostream>

void CodeRun::exec()
{
	int a[] = { 1, 2, 3, 4, 5, 6 };
	std::cout << (1 + 3)[a] - a[0] + (a + 1)[2];

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Answer: "  << std::endl;
	std::cout << "This int a[] declaration creates the following array [1, 2, 3, 4, 5, 6] in memory." << std::endl;
	std::cout << "The std::cout statement shows the result of operation (1 + 3)[a] - a[0] + (a + 1)[2]." << std::endl;
	std::cout << "The calculation of the operation was done by accessing the array values " <<  
		         "through different ways of referencing the array positions." << std::endl;
	std::cout << "This instruction (1 + 3)[a] informs that 4th index is accessed in the array returning the value 5. " << std::endl;
	std::cout << "This instruction a[0] informs that 0th index is accessed in the array returning the value 1. " << std::endl;
	std::cout << "This instruction (a + 1)[2] informs that 3th index is accessed in the array returning the value 4. " << std::endl;
	std::cout << "Therefore (1 + 3)[a] - a[0] + (a + 1)[2] = 5 - 1 + 4 = 8. " << std::endl;


}
            
#pragma once

namespace Primo {

	// function: Check if numerator is Prime number
	// Input::
	//  * num: numerator   [dividend]
	//  * den: denominator [divisor]
	// Output:
	//  * true if number is Prime, otherwise false.
	// Note::
	//  * Recursive function
	//  * Initialize the function with the same value for num and den [num = den]
	bool primo(int num, int den);

	void header();
	void menu(int &number);
}


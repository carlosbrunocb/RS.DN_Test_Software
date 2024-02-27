#pragma once

namespace Palindrome {

	// function: return the inverted input number [Ex.: 135 -> 531]
	// Input::
	//  * num: number
	// Output::
	//	* reverse number
	int reverseNumber(int num);

	// function: return the inverted input number [Ex.: 135 -> 531]
	// Input::
	//  * num: number
	// Output::
	//	* true if number is palindrome, otherwise false.
	bool palindrome(int num);

	void header();
	void menu(int& number);
}
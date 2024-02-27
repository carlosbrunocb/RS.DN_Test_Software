#pragma once
#include <list>

namespace PrimeList {

	// function: return list of prime numbers in descending order.
	// Input::
	//  * init: beginning of range
	//  * end: end of range
	// Output::
	//	* list of prime numbers in descending order.
	std::list<int> primeList(int init, int end);

	void header();
	void showPrimeList(std::list<int>);
}
#include "Q4ListaPrimos.h"
#include "Q1Primo.h"
#include <iostream>

std::list<int> PrimeList::primeList(int init, int end)
{
    std::list<int> list;

	for (int i = end; i > init; i--)
	{
		if (Primo::primo(i, i)) list.push_back(i);
	}

    return list;
}

void PrimeList::header()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "List of Prime Numbers in descending order" << std::endl;
}

void PrimeList::showPrimeList(std::list<int> mylist)
{
	std::list<int>::iterator it;

	for (it = mylist.begin(); it != mylist.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
}



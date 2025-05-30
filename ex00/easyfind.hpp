#pragma once

#include <iostream>
#include <string>
#include <vector> // pour faire un vecteur de int dans le main
#include <algorithm> // pour std::find


template <typename T>
void easyfind(T container, int valueToFind) 
{
	typename T::iterator it = std::find(container.begin(), container.end(), valueToFind);

	if (it == container.end())
		throw std::invalid_argument("Value not found.");
	std::cout << valueToFind << " was found at the position "<< *it << std::endl;
}


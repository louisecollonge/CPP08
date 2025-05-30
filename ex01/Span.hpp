#pragma once

#include <iostream>
#include <string>
#include <algorithm>

class Span
{
	private:
		int *array;
		Span();

	public:
		Span(unsigned int N);
		Span(const Span &other);
		~Span();
		Span &operator=(const Span &other);

		void addNumber();
};

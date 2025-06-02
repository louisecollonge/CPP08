#pragma once

#include <iostream>
#include <string>
#include <algorithm> // pour max, min, sort
#include <vector>
#include <limits>

#define PINK	 	"\033[0;35m"
#define BLUE		"\033[34m"
#define RESET		"\033[0m"

class Span
{
	private:
		unsigned int N;
		std::vector<int> _nbs;
		Span();

	public:
		Span(unsigned int N);
		Span(const Span &other);
		~Span();
		Span &operator=(const Span &other);

		void addNumber(int toAdd);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
};

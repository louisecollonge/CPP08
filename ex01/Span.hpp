#pragma once

#include <iostream>
#include <string>
#include <algorithm> // pour max, min, sort
#include <vector>
#include <limits>

#define PINK		"\033[0;35m"
#define BLUE		"\033[34m"
#define BOLD_RED 	"\033[1;31m"
#define BOLD    	"\033[1m"
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
		void addRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
};

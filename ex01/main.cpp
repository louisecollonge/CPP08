#include "Span.hpp"

int main()
{
	Span sp = Span(10000);
	for (int i = 0; i < 9999; ++i) {
		try {
			sp.addNumber(6);
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	try {
		sp.addNumber(-456);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		sp.addNumber(17);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << PINK << "Shortest span between numbers:\t" << sp.shortestSpan() << RESET << std::endl;
	std::cout << BLUE << "Largest span between numbers:\t" << sp.longestSpan() << RESET << std::endl;

	return 0;
}

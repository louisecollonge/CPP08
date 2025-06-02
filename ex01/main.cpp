#include "Span.hpp"

int main()
{
// Test avec addNumber manuel:
	std::cout << BOLD << "~ First test, with addNumber:" << RESET << std::endl;

	Span sp0 = Span(10000);
	for (int i = 0; i < 9999; ++i) {
		try {
			sp0.addNumber(6);
		} catch (std::exception &e) {
			std::cerr << BOLD_RED << e.what() << RESET << std::endl;
		}
	}
	try {
		sp0.addNumber(-456);
	} catch (std::exception &e) {
		std::cerr << BOLD_RED << e.what() << RESET << std::endl;
	}
	try {
		sp0.addNumber(17);
	} catch (std::exception &e) {
		std::cerr << BOLD_RED << e.what() << RESET << std::endl;
	}
	
	std::cout << PINK << "Shortest span between numbers:\t" << sp0.shortestSpan() << RESET << std::endl;
	std::cout << BLUE << "Largest span between numbers:\t" << sp0.longestSpan() << RESET << std::endl;


// Test avec range d'iterateurs:
	std::cout << BOLD << "\n~ Second test, with addRange:" << RESET << std::endl;

	Span sp1 = Span(5);
	std::vector<int> toAdd;
	toAdd.push_back(42);
	toAdd.push_back(4242);
	toAdd.push_back(424242);
	try {
		sp1.addRange(toAdd.begin(), toAdd.end());
	} catch (std::exception &e) {
		std::cerr << BOLD_RED << e.what() << RESET << std::endl;
	}

	std::vector<int> toAddNext;
	toAddNext.push_back(0);
	toAddNext.push_back(1);
	toAddNext.push_back(2); // causera exception
	try {
		sp1.addRange(toAddNext.begin(), toAddNext.end());
	} catch (std::exception &e) {
		std::cerr << BOLD_RED << e.what() << RESET << std::endl;
	}

	std::cout << PINK << "Shortest span between numbers:\t" << sp1.shortestSpan() << RESET << std::endl;
	std::cout << BLUE << "Largest span between numbers:\t" << sp1.longestSpan() << RESET << std::endl;

	return 0;
}

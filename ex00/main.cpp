#include "easyfind.hpp"

int main() {
	
// Choisir un des types de container suivants pour tester:
	std::vector<int> integers;
	// std::list<int> integers;
	// std::deque<int> integers;

	integers.push_back(0);
	integers.push_back(1);
	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);
	integers.push_back(5);

	try {
		easyfind(integers, 3);
		easyfind(integers, 5);
		easyfind(integers, 0);
		easyfind(integers, -7);
	} catch (std::exception &e) {
		std::cerr << BOLD_RED << e.what() << RESET << std::endl;
	}

	return 0;
}

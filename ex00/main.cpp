#include "easyfind.hpp"

int main() {
	std::vector<int> integers;
	integers.push_back(0);
	integers.push_back(1);
	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);
	integers.push_back(5);

	try {
		easyfind(integers, 3);
		easyfind(integers, 5);
		easyfind(integers, -7);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}

#include "../includes/easyfind.hpp"

int main(void) {

	std::vector<int> array;
	try {
		for (int i = 0; i < 10; i++)
			array.push_back(i);
		int find = easyfind(array, 4);
		std::cout << "Found element " << find << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		int find2 = easyfind(array, 100);
		std::cout << "Found element " << find2 << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

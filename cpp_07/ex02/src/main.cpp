#include "../includes/Array.hpp"
int main(void) {
	Array<int> list(10);
	Array<std::string> map(3);

	try {
		for (int i = 0; i < 10; i++)
			list[i] = i + 1;
		list.printArray();
		std::cout << "Size: " << list.size() << std::endl;
		std::cout << "Index 6: " << list[6] << std::endl;
		std::cout << "Index 0: " << list[0] << std::endl;
		std::cout << "Index 9: " << list[9] << std::endl;
		std::cout << "Index -1: " << list[-1] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
			map[0] = "Filipe";
			map[1] = "Inês";
			map[2] = "Lopes";
			std::cout << "Names:" << std::endl;
			map.printArray();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

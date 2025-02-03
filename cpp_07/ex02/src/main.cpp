#include "../includes/Array.hpp"
int main(void) {
	Array<int> list(10);

	try{
		for (int i = 0; i < 10; i++) {
			list[i] = i + 1;
		}
	
		for (int i = 0; i < 10; i++) {
			std::cout << list[i] << std::endl;
		}
		std::cout << "Size: " << list.size() << std::endl;
		std::cout << "Index 6: " << list[6] << std::endl;
		std::cout << "Index 0: " << list[0] << std::endl;
		std::cout << "Index -1: " << list[-1] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

#include "../includes/ScalarConverter.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error: wrong usage" << std::endl << "Input: ./converter 'value'" << std::endl;
		return (1);
	}
	ScalarConverter::convert(av[1]); // Class doens't need to be instaciated because it uses a static method
	return (0);
}

#include "../includes/ScalarConverter.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error: wrong usage" << std::endl << "Input: ./converter 'value'" << std::endl;
		return (1);
	}
	ScalarConverter converter;
	converter.convert(av[1]);
	return (0);
}

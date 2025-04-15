#include "../includes/RPN.hpp"

int	main(int ac, char **av) {
	if (ac < 2 || ac > 11)
		std::cerr << "Error: wrong usage" << std::endl;

	RPN	rpn;

	try {
		rpn.calculate(ac, av);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}

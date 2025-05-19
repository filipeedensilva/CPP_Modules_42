#include "../includes/PmergeMe.hpp"

int	main(int ac, char **av) {
	if (ac < 2) {
		std::cerr << "Error: Invalid number of arguments!" << std::endl;
		return (1);
	}

	try {
		PmergeMe algorythm;
		algorythm.parseInput(av);
		algorythm.sort();
	}
	catch (std::exception const &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return (2);
	}

	return (0);
}

#include "../includes/BitcoinExchange.hpp"

int	main(int ac, char** av) {
	if (ac != 3) {
		std::cerr << "Error: Wrong usage!\nInput: ./btc data.csv input.csv" << std::endl;
		return (1);
	}

	std::string	data(av[1]);
	std::string input(av[2]);

	try {
		BitcoinExchange btc(data, input);
		btc.parseData();
		btc.parseInput();
		// btc.printMap();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

#include "../includes/Span.hpp"

int	main(void) {
	Span	test(10000);
	srand(time(0));

	try {
		test.addNumber(50);
		test.addNumber(20);
		std::cout << test[0] << std::endl;
		std::cout << test[1] << std::endl;
		std::cout << (20 - 50) << std::endl;
		std::cout << test.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		for (int i = 0; i < 5000; i++)
			test.addNumber(rand());
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}

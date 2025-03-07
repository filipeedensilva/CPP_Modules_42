#include "../includes/Span.hpp"

int	main(void) {
	Span	test(50);
	srand(time(0));

	try {
		test.addNumber(50);
		std::cout << test.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		for (int i = 0; i < 49; i++)
			test.addNumber(i);
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.getMax() << std::endl;
		std::cout << test.getMin() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}

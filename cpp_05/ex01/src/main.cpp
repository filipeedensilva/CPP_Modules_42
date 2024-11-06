#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"
#include <iostream>

int main(void) {
	try {
		Bureaucrat winnie;
		Bureaucrat lazy("lazyBOI", 5);
		std::cout << winnie << std::endl;
		std::cout << lazy << std::endl;
		for (int i = 0; i < 5; i++) {
			lazy.gradeIncrement();
			std::cout << lazy << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}

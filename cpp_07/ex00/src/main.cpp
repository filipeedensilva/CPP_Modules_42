#include "../includes/whatever.hpp"
int main(void) {

	int	a = 10;
	int	b = 20;

	std::cout << "Before swap:\na = " << a << "\nb = " << b << std::endl;
	::swap(a, b);
	std::cout << "After swap:\na = " << a << "\nb = " << b << std::endl;

	std::cout << "Max between a and b: " << ::max(a, b) << std::endl;
	std::cout << "Min between a and b: " << ::min(a, b) << std::endl;

	return (0);
}

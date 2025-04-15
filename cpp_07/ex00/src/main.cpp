#include "../includes/whatever.hpp"
int main(void) {

	int	a = 10;
	int	b = 20;

	std::string aa = "hello";
	std::string bb = "hell0";

	std::cout << "Before swap:\na = " << a << "\nb = " << b << std::endl;
	swap(a, b);
	std::cout << "After swap:\na = " << a << "\nb = " << b << std::endl;

	std::cout << "Max between a and b: " << max(a, b) << std::endl;
	std::cout << "Min between a and b: " << min(a, b) << std::endl;

	std::cout << "Before swap:\na = " << aa << "\nb = " << bb << std::endl;
	swap(aa, bb);
	std::cout << "After swap:\na = " << aa << "\nb = " << bb << std::endl;

	std::cout << "Max between a and b: " << max(aa, bb) << std::endl;
	std::cout << "Min between a and b: " << min(aa, bb) << std::endl;

	return (0);
}

#include "../includes/RPN.hpp"
#include <sstream>

RPN::RPN() { }

RPN::~RPN() { }

RPN::RPN(const RPN &copy) {
	*this = copy;
}

RPN&	RPN::operator=(const RPN &copy) {
	if (this != &copy)
		_stack = copy._stack;
	return (*this);
}

bool	RPN::isOperator(std::string arg) {
	if (arg == "+" || arg == "-" || arg == "*" || arg == "/")
		return (true);
	return (false);
}

bool	RPN::isDigit(std::string arg) {
	if (arg.empty())
		return (false);

	char *endptr = NULL;
	std::strtol(arg.c_str(), &endptr, 10);
	if (*endptr != '\0')
		return (false);
	return (true);
}

int		RPN::applyCalculation(int a, int b, std::string arg) {
	if (arg == "+")
		return (a + b);
	else if (arg == "-")
		return (a - b);
	else if (arg == "*")
		return (a * b);
	else {
		if (b == 0)
			throw DivisionZero();
		return (a / b);
	}
}

void	RPN::calculate(int ac, char **av) {
	for (int i = 1; i < ac; i++) {
		std::istringstream	iss(av[i]);
		std::string arg;

		while (iss >> arg) {
			if (isOperator(arg)){
				if (_stack.size() < 2)
					throw InsuficientArguments();

				int b = _stack.top();
				_stack.pop();
				int a = _stack.top();
				_stack.pop();
				_stack.push(applyCalculation(a, b, arg));
			}
			else if (isDigit(arg)) 
				_stack.push(std::atoi(arg.c_str()));
			else
				throw InvalidInput();
		}
	}

	if (_stack.size() != 1)
		throw InvalidRPN();
	std::cout << "Result: " << _stack.top() << std::endl;
}

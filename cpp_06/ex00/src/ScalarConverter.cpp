#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy) {
	(void)copy;
	return (*this);
}

ScalarConverter::~ScalarConverter() {
}

void	printChar(int c) {
	std::cout << "char: ";
	if (c < 0 || c > 127)
		std::cout << "impossible" << std::endl;
	else if (isprint(c))
		std::cout << static_cast<char>(c) << std::endl;
	else
		std::cout << "non displayable" << std::endl;
}

void	printInt(long num) {
	std::cout << "int: ";
	if (num > INT_MAX || num < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;
}

void	printFloat(float num) {
	std::cout << "float: ";
	if (num > FLT_MAX || num < FLT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
}

void	printDouble(double num) {
	if (num < std::numeric_limits<double>::min() ||
	num > std::numeric_limits<double>::max())
		std::cout << "impossible" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double: " << num << std::endl;
}

void	printPseudo(std::string str) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "nan" || str == "nanf") {
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "inf" || str == "inff" || str == "+inf" || str == "+inff") {
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	else {
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

void	convertToInt(std::string str) {
	long num = atol(str.c_str());
	if (num < INT_MIN || num > INT_MAX) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else {
		printChar(num);
		printInt(num);
		printFloat(static_cast<float>(num));
		printDouble(static_cast<double>(num));
	}
}

void	convertToPrecision(std::string str) {
	float num = atof(str.c_str());
	if (num < FLT_MIN || num > FLT_MAX) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else {
		printChar(num);
		printInt(num);
		printFloat(num);
		printDouble(static_cast<double>(num));
	}
}

int		parseInput(std::string input) {
	if (input == "nan" || input == "nanf" || input == "+inf" || input == "+inff" || input == "-inf" || input == "-inff"
			|| input == "inff" || input == "inf")
		return (PSEUDO);
	if (!isdigit(input[0]) && input.length() == 1)
		return (CHAR);
	size_t	i = 0;
	if (input[0] == '+' || input[0] == '-')
		i++;
	while (i < input.length() && isdigit(input[i]))
		i++;
	if (!input[i])
		return (INT);
	if (input[i] == '.') {
		i++;
		if (!isdigit(input[i]) || !input[i])
			return (INVALID);
		while (i < input.length() && isdigit(input[i]))
			i++;
		if (input[i] == 'f' && i == input.length() - 1)
			return (FLOAT);
		if (i == input.length())
			return (DOUBLE);
	}
	return (INVALID);
}

void	ScalarConverter::convert(const char* input) {
	int	type = parseInput(input);

	switch (type) {
		case 1 :
			printChar(input[0]);
			printInt(static_cast<int>(input[0]));
			printFloat(static_cast<float>(input[0]));
			printDouble(static_cast<double>(input[0]));
			break ;
		case 2 :
			convertToInt(input);
			break ;
		case 3 :
			convertToPrecision(input);
			break ;
		case 4 :
			convertToPrecision(input);
			break ;
		case 5 :
			printPseudo(input);
			break ;
		default :
			std::cout << "Error: argument is invalid" << std::endl;
	}
}

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <exception>
# include <climits>
# include <float.h>
# include <stdlib.h>
# include <cctype>
# include <cfloat>
# include <iomanip>
# include <limits>

enum	e_type {
	CHAR = 1,
	INT = 2,
	FLOAT = 3,
	DOUBLE = 4,
	PSEUDO = 5,
	INVALID = 6
};

class ScalarConverter
{
	private:

	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &copy);
		~ScalarConverter();

		static void	convert(const char* input);
};

#endif

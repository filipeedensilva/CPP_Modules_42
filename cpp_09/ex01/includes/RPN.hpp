#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <exception>
# include <string>
# include <stack>
# include <cstdlib>

class RPN {
	private :
		std::stack<int> _stack;
		int				_res;
	public :
		RPN();
		~RPN();
		RPN(const RPN &copy);
		RPN	&operator=(const RPN &copy);

		void	calculate(int ac, char **av);

		bool	isOperator(std::string token);
		bool	isDigit(std::string token);
		int		applyCalculation(int a, int b, std::string arg);

		class InsuficientArguments : public std::exception {
			public:
				const char* what() const throw() {
					return ("Error: Not enough arguments");
				}
		};
		
		class DivisionZero: public std::exception {
			public:
				const char* what() const throw() {
					return ("Error: Division by 0 is impossible!");
				}
		};

		class InvalidInput : public std::exception {
			public :
				const char* what() const throw() {
					return ("Error: Invalid input ");
				}
		};

		class InvalidRPN : public std::exception {
			public :
				const char* what() const throw() {
					return ("Error: Invalid RPN expression");
				}
		};
};

#endif

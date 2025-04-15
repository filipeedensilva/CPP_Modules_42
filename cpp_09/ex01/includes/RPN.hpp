#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <exception>
# include <string>
# include <stack>

class RPN {
	private :
		std::stack<int> _stack;
	public :
		RPN();
		~RPN();
		RPN(const RPN &copy);
		RPN	&operator=(const RPN &copy);
};

#endif

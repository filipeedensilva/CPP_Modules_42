#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <string>
# include <vector>
# include <limits.h>

class Span {
	private:
		std::vector<int>	_array;
		int					_max;
		int					_min;
	public:
		Span(unsigned int n);
		Span(const Span &copy);
		Span &operator=(const Span &copy);
		~Span();

		void	addNumber(int n);
};


#endif

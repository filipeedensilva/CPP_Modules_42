#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
#include <exception>
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
		int  operator[](unsigned int i);
		~Span();

		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);

		void	fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		class MaxCapacityException : public std::exception {
			public :
				const char* what() const throw() {
					return ("Span capacity exceeded!");
				}
		};
		class EmptySpanException : public std::exception {
			public :
				const char* what() const throw() {
					return ("Span is empty!");
				}
		};
};

#endif

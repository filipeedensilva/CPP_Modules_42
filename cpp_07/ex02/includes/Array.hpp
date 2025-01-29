#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
# include <iostream>
# include <string>
# include <exception>

template <typename T>
class Array
{
	private:
		size_t	_size;
		T		*_values;

	public:
		Array() : _size(0), _values(NULL) {}
		Array(unsigned int n) : _size(n), _values(new T[n]) {}
		Array(const Array &copy);
		Array &operator=(const Array &copy);
		~Array();

		int	size(void);
};

#endif

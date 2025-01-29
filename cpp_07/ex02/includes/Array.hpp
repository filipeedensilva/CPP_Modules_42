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
		Array(size_t n) : _size(n), _values(new T[n]) {}
		Array(const Array &copy) {
			_values = new T[copy.getSize()];
			_size = copy.getSize;
			for (size_t i = 0; i < copy.getSize(); i++)
				_values[i] = copy._values[i];
		}
		Array &operator=(const Array &copy) {
			if (this != copy) {
				if (_values)
					delete[] _values;
				_size = copy.getSize();
				_values = new T[copy.getSize()];
				for (size_t i = 0; i < copy.getSize(); i++)
					_values[i] = copy._values[i];
			}
			return (*this);
		}
		~Array() {
			delete[] _values;
		}

		size_t	getSize(void) const { return (this->_size); };

		class	OutOfBoundsExceptions : public std::exception {
			public :
				const char* what() const throw() {
					return ("Error: index out of bounds");
				}
		};
};

#endif

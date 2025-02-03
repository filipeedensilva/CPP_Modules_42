#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cstddef>

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
			_values = new T[copy.size()];
			_size = copy.size;
			for (size_t i = 0; i < copy.size(); i++)
				_values[i] = copy._values[i];
		}
		Array &operator=(const Array &copy) {
			if (this != copy) {
				if (_values)
					delete[] _values;
				_size = copy.size();
				_values = new T[copy.size()];
				for (size_t i = 0; i < copy.size(); i++)
					_values[i] = copy._values[i];
			}
			return (*this);
		}
		~Array() { delete[] _values; }

		T &operator[](size_t index) {
			if (index >= _size)
				throw Array::OutOfBoundsException();
			return (_values[index]);
		}


		class	OutOfBoundsException : public std::exception {
			public :
				const char* what() const throw() {
					return ("Error! index out of bounds");
				}
		};

		size_t	size(void) const { return (_size); };
};

#endif

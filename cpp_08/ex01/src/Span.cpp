#include "../includes/Span.hpp"

Span::Span(unsigned int n) : _max(INT_MAX), _min(INT_MIN) {
	_array.reserve(n);
}

Span::Span(const Span &copy) {
	*this = copy;
}

Span&	Span::operator=(const Span &copy) {
	if (this != &copy) {
		_array = copy._array;
		_max = copy._max;
		_min = copy._min;
	}
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int n) {
	// if (_array.size() >= _array.capacity())
		// throw Exception
	if (n < _min)
		_min = n;
	else if (n > _max)
		_max = n;
	_array.push_back(n);
}

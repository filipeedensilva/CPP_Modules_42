#include "../includes/Span.hpp"

Span::Span(unsigned int n) : _max(INT_MIN), _min(INT_MAX) {
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

int		Span::operator[](unsigned int i) {
	return (_array[i]);
}

Span::~Span() {}

void	Span::addNumber(int n) {
	if (_array.size() == _array.capacity())
		throw MaxCapacityException();
	if (n < _min)
		_min = n;
	if (n > _max)
		_max = n;
	_array.push_back(n);
}

int		Span::shortestSpan(void) {
	if (_array.size() < 2)
		throw (EmptySpanException());
	int	diff = INT_MAX;
	std::vector<int> tmp_array;
	tmp_array = _array;

	std::sort(tmp_array.begin(), tmp_array.end());
	for (unsigned int i = 0; i < tmp_array.size() - 1; i++) {
		int newdiff = tmp_array[i + 1] - tmp_array[i];
		if (newdiff < diff)
			diff = newdiff;
	}
	return (diff);
}

int		Span::longestSpan(void){
	if (_array.size() < 2)
		throw (EmptySpanException());
	return (_max - _min);
}

void	Span::fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (_array.size() + std::distance(begin, end) > _array.capacity())
		throw (MaxCapacityException());
	for (std::vector<int>::iterator it = begin; it != end; it++)
	{
		if (*it > _max)
			_max = *it;
		if (*it < _min)
			_min = *it;
	}
	_array.insert(_array.end(), begin, end);
}

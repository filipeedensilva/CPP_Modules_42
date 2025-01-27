#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>
void	swap(T& a, T& b) {
	T swap = a;
	a = b;
	b = swap;
}

template <typename T>
T&		min(T& a, T& b) {
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T&		max(T& a, T& b) {
	if (a > b)
		return (a);
	return (b);
}

#endif

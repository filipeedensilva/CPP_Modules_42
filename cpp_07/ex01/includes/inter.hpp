#ifndef INTER_HPP
# define INTER_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>
void	inter(T *array, int len, void (*f)(T const &)) {
	if (!array)
		return ;
	for (int i = 0; i < len; i++) {
		f(array[i]);
	}
}

#endif

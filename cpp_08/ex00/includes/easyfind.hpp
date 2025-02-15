#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>
# include <algorithm>

class NotFoundException : public std::exception {
	public:
		const char* what() const throw() {
			return ("Element not found!");
		}
};

template <typename T>
int easyfind(T& cont, int find) {
	typename T::iterator i = std::find(cont.begin(), cont.end(), find);
	if (i == cont.end())
		throw NotFoundException();
	return (*i);
};

#endif

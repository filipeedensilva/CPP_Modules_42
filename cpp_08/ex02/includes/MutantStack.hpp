#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T> {
	public:

		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}
		MutantStack	&operator=(const MutantStack &copy) {
			std::stack<T>::operator=(copy);
			return (*this);
		}
		~MutantStack() {}

		iterator begin(void) { return (std::stack<T>::c.begin()); }
		iterator end(void) { return (std::stack<T>::c.end()); }
};

#endif

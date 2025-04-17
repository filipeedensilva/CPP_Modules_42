#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <list>
# include <vector>
# include <set>
# include <exception>
# include <climits>

class PmergeMe {
	private :
		std::list<int>		_list;
		std::vector<int>	_vector;

		void	parseInput(char **av);
		bool	isValidNumber(const std::string &str);
		bool	hasDuplicates(const std::vector<int> &values);

	public :
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &copy);

		PmergeMe&	operator=(const PmergeMe &copy);

		class InvalidNumber : public std::exception {
			public:
				const char* what() const throw() {
					return ("Error: Invalid input");
				}
		};
		class IntOverflow : public std::exception {
			public:
				const char* what() const throw() {
					return ("Error: Int overflow detected!");
				}
		};
		class DuplicateFound : public std::exception {
			public:
				const char* what() const throw() {
					return ("Error: Duplicate values not allowed");
				}
		};
};

#endif

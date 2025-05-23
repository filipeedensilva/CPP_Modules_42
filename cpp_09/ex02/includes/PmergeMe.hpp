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
# include <ctime>

class PmergeMe {
	private :
		std::list<int>		_list;
		std::vector<int>	_vector;

	public :
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &copy);

		PmergeMe&	operator=(const PmergeMe &copy);

		void	parseInput(char **av);
		bool	isValidNumber(const std::string &str);
		bool	hasDuplicates(const std::vector<int> &values);
		void	isSorted(void);

		void	sort(void);
		void	display(int flag);
		void	displayTime(std::string const &type, double time);

		// LIST
		void								mergeSortList(std::list<int>::iterator begin, std::list<int>::iterator end);
		void								mergeList(std::list<int>::iterator begin, std::list<int>::iterator mid, std::list<int>::iterator end);
		static 	std::list<int>::iterator	insertionList(std::list<int>::iterator begin, std::list<int>::iterator end, int value);
		void								insertionSortList(void);

		// VECTOR
		void								mergeSortVector(int begin, int end);
		void								mergeVector(int begin, int mid, int end);
		int									insertionVector(int begin, int end, int value, std::vector<int> &tmp);
		void								insertionSortVector(void);

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

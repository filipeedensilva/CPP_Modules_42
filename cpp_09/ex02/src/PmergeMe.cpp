#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe() { }

PmergeMe::~PmergeMe() { }

PmergeMe::PmergeMe(const PmergeMe& copy) {
	*this = copy;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe &copy) {
	if (this != &copy) {
		_list = copy._list;
		_vector = copy._vector;
	}
	return (*this);
}

void	PmergeMe::parseInput(char **av) {
	std::set<int>		findDup;
	std::vector<int>	values;

	for (int i = 1; av[i]; i++) {
		std::string	token(av[i]);
		std::istringstream	iss(token);
		std::string			num;

		while (iss >> num) {
			if (!isValidNumber(num))
				throw InvalidNumber();
			long value = std::strtol(num.c_str(), NULL, 10);
			if (value < 0 || value > INT_MAX)
				throw IntOverflow();
			if (findDup.find(static_cast<int>(value)) != findDup.end())
				throw DuplicateFound();
			findDup.insert(static_cast<int>(value));
			values.push_back(static_cast<int>(value));
		}
		_vector.assign(values.begin(), values.end());
		_list.assign(values.begin(), values.end());
	}
}

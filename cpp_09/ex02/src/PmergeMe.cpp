#include "../includes/PmergeMe.hpp"
#include <algorithm>
#include <ctime>

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

bool	PmergeMe::isValidNumber(const std::string &str) {
	for (int i = 0; str[i]; ++i) {
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
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

void	PmergeMe::sort(void) {
	std::clock_t	start, end;
	double			lTime, vTime;

	display(0);

	start = clock();
	mergeSortList(_list.begin(), _list.end());
	insertionSortList();
	end = clock();
	lTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;

	start = clock();
	mergeSortVector(0, _vector.size());
	insertionSortVector();
	end = clock();
	vTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;

	display(1);

	displayTime("std::list", lTime);
	displayTime("std::vector", vTime);
}

void	PmergeMe::displayTime(std::string const &type, double time) {
	std::cout << "Time to proccess a range of " << _vector.size() << " elements with " 
		<< type << " : " << time << " us" << std::endl;
}

void	PmergeMe::isSorted(void) {

	bool	vSorted = true;
	bool	lSorted = true;
	for (size_t i = 0; i < _vector.size(); ++i) {
		if (_vector[i - 1] > _vector[i]) {
			vSorted = false;
			break ;
		}
	}
	for (std::list<int>::iterator it = ++_list.begin(), prev = _list.begin(); it != _list.end(); it++)
	{
		if (*prev > *it) {
			lSorted = false;
			break ;
		}
	}
	if (vSorted)
		std::cout << "Vector is sorted!" << std::endl;
	else
		std::cout << "Vector is not sorted! " << std::endl;
	if (lSorted)
		std::cout << "List is sorted!" << std::endl;
	else
		std::cout << "List is not sorted!" << std::endl;
}

void	PmergeMe::display(int flag) {
	if (flag)
		std::cout << "After: ";
	else
		std::cout << "Before: ";

	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

////////////////////////////////////////////////////////////////////////////////



//////////////////////////////// LIST SORT /////////////////////////////////////

void	PmergeMe::mergeList(std::list<int>::iterator begin, std::list<int>::iterator mid, std::list<int>::iterator end) {
	std::list<int> tmp;
	std::list<int>::iterator a = begin, b = mid;

	while (a != mid && b != end) {
		if (*a < *b)
			tmp.push_back(*a++);
		else
			tmp.push_back(*b++);
	}
	while (a != mid)
		tmp.push_back(*a++);
	while (b != end)
		tmp.push_back(*b++);

	std::copy(tmp.begin(), tmp.end(), begin);
}

void	PmergeMe::mergeSortList(std::list<int>::iterator begin, std::list<int>::iterator end) {
	int	size = std::distance(begin, end);
	if (size <= 2) {
		if (size == 2) {
			std::list<int>::iterator tmp = begin;
			++tmp;
			if (*begin > *tmp)
				std::iter_swap(begin, tmp);
		}
		return ;
	}
	std::list<int>::iterator mid = begin;
	std::advance(mid, size / 2);
	mergeSortList(begin, mid);
	mergeSortList(mid, end);
	mergeList(begin, mid, end);
}

std::list<int>::iterator	PmergeMe::insertionList(std::list<int>::iterator begin, std::list<int>::iterator end, int value) {
	if (begin == end)
		return (begin);
	std::list<int>::iterator mid = begin;
	std::advance(mid, std::distance(begin, end) / 2);
	if (value < *mid)
		return (insertionList(begin, mid, value));
	else if (value > *mid)
		return (insertionList(++mid, end, value));
	else
		return (mid);
}

void	PmergeMe::insertionSortList(void) {
	std::list<int> tmp;
	std::list<int>::iterator current = _list.begin();

	for (size_t i = 0; i < _list.size(); ++i) {
		if (current == --_list.end() || i % 2 != 0)
			tmp.insert(insertionList(tmp.begin(), tmp.end(), *current), *current);
		else
			tmp.push_back(*current);
		++current;
	}
	_list = tmp;
}

/////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////// VECTOR SORT /////////////////////////////////

void	PmergeMe::mergeSortVector(int begin, int end) {
	int	size = end - begin;
	if (size <= 2) {
		if (size == 2 && _vector[begin] > _vector[end - 1])
			std::swap(_vector[begin], _vector[end - 1]);
		return ;
	}
	int mid = begin + size / 2;
	mergeSortVector(begin, mid);
	mergeSortVector(mid, end);
	mergeVector(begin, mid, end);
}

void	PmergeMe::mergeVector(int begin, int mid, int end) {
	std::vector<int> tmp;
	int a = begin, b = mid;

	while (a < mid && b < end) {
		if (_vector[a] < _vector[b])
			tmp.push_back(_vector[a++]);
		else
			tmp.push_back(_vector[b++]);
	}
	while (a < mid)
		tmp.push_back(_vector[a++]);
	while (b < end)
		tmp.push_back(_vector[b++]);
	std::copy(tmp.begin(), tmp.end(), _vector.begin() + begin);
}

int		PmergeMe::insertionVector(int begin, int end, int value, std::vector<int> &tmp) {
	if (begin == end)
		return (begin);

	int mid = begin + (end - begin) / 2;
	if (value < tmp[mid])
		return (insertionVector(begin, mid, value, tmp));
	else if (value > tmp[mid])
		return (insertionVector(mid + 1, end, value, tmp));
	else
		return (mid);
}

void	PmergeMe::insertionSortVector(void) {
	std::vector<int> tmp;

	for (size_t i = 0; i < _vector.size(); ++i) {
		if (i + 1 == _vector.size() || i % 2 != 0)
			tmp.insert(tmp.begin() + insertionVector(0, tmp.size(), _vector[i], tmp), _vector[i]);
		else
			tmp.push_back(_vector[i]);
	}
	_vector = tmp;
}

/////////////////////////////////////////////////////////////////////////////////

#include "../includes/BitcoinExchange.hpp"
#include <string>

BitcoinExchange::BitcoinExchange(std::string data, std::string input) {
	_dataFile.open(data.c_str());
	_inputFile.open(input.c_str());

	if (!_dataFile.is_open() || !_inputFile.is_open())
		throw FileNotOpen();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {
	*this = copy;
}

BitcoinExchange::~BitcoinExchange() { } ;

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange &copy) {
	if (this != &copy) {
		_data = copy._data;
	}
	return (*this);
}

double		stringToDouble(const std::string &str) {
	std::stringstream ss(str);
	double num;

	ss >> num;
	return (num);
}

int		stringToInt(const std::string &str) {
	std::stringstream ss(str);
	int num;

	ss >> num;
	return (num);
}

bool	stringIsDigit(const std::string &str) {
	for (std::string::const_iterator it = str.begin(); it != str.end(); it++) {
		if (!std::isdigit(*it))
			return (false);
	}
	return (true);
}

bool		isValidPrice(const std::string &str) {
	std::stringstream ss(str);
	double num;

	ss >> num;
	return (!ss.fail() && ss.eof());
}

bool	isValidDate(const std::string &date) {
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return (false);

	std::string	yearStr = date.substr(0, 4);
	std::string monthStr = date.substr(5, 2);
	std::string dayStr = date.substr(8, 2);

	if (!stringIsDigit(yearStr) || !stringIsDigit(monthStr) || !stringIsDigit(dayStr))
		return (false);

	int			year = stringToInt(yearStr);
	int			month = stringToInt(monthStr);
	int			day = stringToInt(dayStr);

	if (month < 1 || month > 12 || day < 1)
		return (false);

	int	daysinMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		daysinMonth[1] = 29;
	
	return (day <= daysinMonth[month - 1]);
}

std::string	trimWhitespaces(const std::string &str) {
	size_t first = str.find_first_not_of(" \f\v\n\r\t");
	size_t end = str.find_last_not_of(" \f\v\n\r\t");
	if (first == std::string::npos || end == std::string::npos)
		return "";
	return (str.substr(first, end - first + 1));

}

void	BitcoinExchange::parseData(void) {
	std::string	line;

	std::getline(_dataFile, line);

	while (std::getline(_dataFile, line)) {
		std::stringstream ss(line);
		std::string date, price;

		if (!std::getline(ss, date, ',') || !std::getline(ss, price)) {
			std::cerr << "Warning: Malformed line detected ... skipping ..." << line << std::endl;
			continue ;
		}
		if (!isValidDate(date)) {
			std::cerr << "Warning: Invalid date format detected in line: " << line << std::endl;
			continue ;
		}
		if (!isValidPrice(price)) {
			std::cerr << "Warning: Invalid price detected in line: " << line << std::endl;
			continue ;
		}
		_data[date] = stringToDouble(price);
	}
}

void	BitcoinExchange::parseInput(void) {
	std::string	line;

	std::getline(_inputFile, line);

	while (std::getline(_inputFile, line)) {
		std::stringstream ss(line);
		std::string date, valueStr;

		if (!std::getline(ss, date, '|') || !std::getline(ss, valueStr)) {
			std::cerr << "Error: Bad input => " << line << std::endl;
			continue ;
		}

		date = trimWhitespaces(date);
		valueStr = trimWhitespaces(valueStr);

		if (!isValidDate(date)) {
			std::cerr << "Error: Invalid date => " << date << std::endl;
			continue ;
		}
		if (!isValidPrice(valueStr)) {
			std::cerr << "Error: Invalid price => " << valueStr << std::endl;
			continue ;
		}
		
		double value = stringToDouble(valueStr);
		if (value < 0 || value > 1000) {
			std::cerr << "Error: Invalid value: " << value << std::endl;
			continue ;
		}
		std::map<std::string, double>::const_iterator it = _data.lower_bound(date);
		if (it == _data.end() || it->first != date) {
			if (it == _data.begin()) {
				std::cerr << "Error: No earlier date available for " << date << std::endl;
				continue ;
			}
			--it;
		}

		double price = it->second;
		std::cout << date << " => " << value << " = " << (value * price) <<  std::endl;
	}
}

void	BitcoinExchange::printMap(void) {
	for (std::map<std::string, double>::const_iterator it = _data.begin(); it != _data.end(); it++) {
		std::cout << "Date: " << it->first << " " << "Price: " << it->second << std::endl;
	}
}

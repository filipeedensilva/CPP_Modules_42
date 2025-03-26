#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string data, std::string input) : _dataFile(data), _inputFile(input) {
	if (!_dataFile)
		throw FileNotOpen();
	if (!_inputFile)
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

void	BitcoinExchange::parseData(void) {
	// std::sstream input;
}

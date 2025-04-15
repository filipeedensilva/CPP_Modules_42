#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <exception>
# include <map>
# include <fstream>
# include <sstream>
# include <string>

class BitcoinExchange {
	private:
		std::map<std::string, double>	_data;
		std::ifstream					_dataFile;
		std::ifstream					_inputFile;
	public:
		BitcoinExchange();
		BitcoinExchange(std::string data, std::string input);
		BitcoinExchange(const BitcoinExchange &copy);
		~BitcoinExchange();

		BitcoinExchange&	operator=(const BitcoinExchange &copy);
		
		void	parseData(void);
		void	parseInput(void);
		void	printMap(void);

		class	FileNotOpen : public std::exception {
			public :
				const char* what() const throw() {
					return ("Error: file could not be opened!");
				}
		};
};

#endif

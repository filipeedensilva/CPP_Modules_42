#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iomanip>
# include <cstdlib>

class Contact
{
	private: 
		std::string	first_name;
		std::string	surname;
		std::string	nickname;
		std::string	secret;
		std::string	number;
	public:
		Contact();
		~Contact();
		void	addFirstName();
		void	addSurname();
		void	addNickname();
		void	addSecret();
		void	addNumber();
		std::string	getFirstName();
		std::string	getSurname();
		std::string	getNickname();
		std::string	getSecret();
		std::string	getNumber();
};

std::string	removeTab(std::string str);

#endif

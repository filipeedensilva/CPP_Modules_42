#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	private: 
		std::string	first_name;
		std::string	surname;
		std::string	nickname;
		std::string	city;
		std::string	number;
	public:
		Contact();
		~Contact();
		void	addFirstName();
		void	addSurname();
		void	addNickname();
		void	addCity();
		void	addNumber();
		std::string	getFirstName();
		std::string	getSurname();
		std::string	getNickname();
		std::string	getCity();
		std::string	getNumber();
};

#endif

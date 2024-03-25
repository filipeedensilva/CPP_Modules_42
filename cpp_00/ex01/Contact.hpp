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
		bool		is_active;
	public:
		Contact();
		~Contact();
		void	addFirstName();
		void	addSurname();
		void	addNickname();
		void	addCity();
		void	addNumber();
		bool	isActive();
};

#endif

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contact[8];
		int		numContacts;
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(int index);
		void	searchContact();
		void	displayContact();
		std::string	trimString(std::string str);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:57:57 by feden-pe          #+#    #+#             */
/*   Updated: 2024/05/22 16:00:09 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "This is your new phonebook. Enjoy!" << std::endl;
	this->numContacts = 0;
}

PhoneBook::~PhoneBook() {
	std::cout << "\nGoodbye! Hope you had a good experience!" << std::endl;
}

void	PhoneBook::addContact(int i) {
	
	this->contact[i].addFirstName();
	this->contact[i].addSurname();
	this->contact[i].addNickname();
	this->contact[i].addCity();
	this->contact[i].addNumber();
	std::cout << "Contact added!" << std::endl;
}

std::string	PhoneBook::trimString(std::string str) {
	std::string	tmp;

	tmp = str;
	if (tmp.size() > 9)
	{
		tmp.resize(10);
		tmp[9] = '.';
	}
	return (tmp);
}

void	PhoneBook::searchContact() {
	int	i = -1;
	std::cout << std::setw(10) << "0" << "|" << std::setw(10) << "Name" << "|"
              << std::setw(10) << "Surname" << "|"
              << std::setw(10) << "Nickname" << "|"
              << std::setw(10) << "City" << "|"
              << std::setw(10) << "Number" << "|" << std::endl;
	while (++i < 8) {
        std::cout << std::setw(10) << i + 1 << "|" << std::setw(10) << this->trimString(contact[i].getFirstName()) << "|" 
                  << std::setw(10) << this->trimString(contact[i].getSurname()) << "|" 
                  << std::setw(10) << this->trimString(contact[i].getNickname()) << "|" 
                  << std::setw(10) << this->trimString(contact[i].getCity()) << "|" 
                  << std::setw(10) << this->trimString(contact[i].getNumber()) << "|" << std::endl;
    }
}

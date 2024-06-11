/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:57:57 by feden-pe          #+#    #+#             */
/*   Updated: 2024/06/11 19:27:58 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>

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

void	PhoneBook::displayContact() {
	int	i = -1;

	std::cout << std::setw(10) << "" << "|" << std::setw(10) << "Name" << "|"
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
	this->searchContact();
}

void	PhoneBook::searchContact(){
	std::string	buffer;
	int	index;

	buffer[0] = 0;
	std::cout << "Pick a contact (1 - 8): ";
	std::getline(std::cin, buffer);
	std::stringstream convert(buffer);
	convert >> index;
	if (std::cin.eof())
	{
		buffer[0] = 0;
		return ;
	}
	if (index < 1 || index > 8)
	{
		std::cout << "Error: value must be in between 1 and 8" << std::endl;
		this->searchContact();
		return ;
	}
	else {
		index--;
		std::cout << std::setw(10) << "" << "|" << std::setw(10) << "Name" << "|"
			<< std::setw(10) << "Surname" << "|"
			<< std::setw(10) << "Nickname" << "|"
			<< std::setw(10) << "City" << "|"
			<< std::setw(10) << "Number" << "|" << std::endl;
		std::cout << std::setw(10) << index + 1 << "|" << std::setw(10) << this->trimString(contact[index].getFirstName()) << "|" 
			<< std::setw(10) << this->trimString(contact[index].getSurname()) << "|" 
			<< std::setw(10) << this->trimString(contact[index].getNickname()) << "|" 
			<< std::setw(10) << this->trimString(contact[index].getCity()) << "|" 
			<< std::setw(10) << this->trimString(contact[index].getNumber()) << "|" << std::endl;
	}
}

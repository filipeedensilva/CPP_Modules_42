/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:57:57 by feden-pe          #+#    #+#             */
/*   Updated: 2024/03/25 21:28:48 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "This is your new phonebook. Enjoy!" << std::endl;
}

PhoneBook::~PhoneBook() {
	std::cout << "\nGoodbye! Hope you had a good experience!" << std::endl;
}

void	PhoneBook::addContact() {
	int			i = 0;
	
	while (i <= 8 && contact[i].isActive())
		i++;
	contact[i].addFirstName();
	contact[i].addSurname();
	contact[i].addNickname();
	contact[i].addCity();
	contact[i].addNumber();
	std::cout << "Contact added!" << std::endl;
}

void	PhoneBook::searchContact() {

}

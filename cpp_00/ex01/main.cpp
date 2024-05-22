/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:15:19 by feden-pe          #+#    #+#             */
/*   Updated: 2024/05/22 15:59:54 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void) {
	int			index;
	PhoneBook phonebook;
	std::string input;

	index = 0;
	std::cout << "Choose a command: ADD | SEARCH | EXIT" << std::endl;
	while (true) {
		std::cout << "Command: ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.addContact(index++);
		else if (input == "SEARCH")
			phonebook.searchContact();
		else if (input == "EXIT" || std::cin.eof())
			break ;
		if (index == 8)
			index = 0;
	}
}

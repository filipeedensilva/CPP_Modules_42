/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:15:19 by feden-pe          #+#    #+#             */
/*   Updated: 2024/03/25 21:27:42 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void) {
	PhoneBook phonebook;
	std::string input;

	std::cout << "Choose a command: ADD | SEARCH | EXIT" << std::endl;
	while (true) {
		std::cout << "Command: ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")
			phonebook.searchContact();
		else if (input == "EXIT" || std::cin.eof())
			break ;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:15:02 by feden-pe          #+#    #+#             */
/*   Updated: 2024/06/26 16:11:17 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void	Harl::debug(void) {
	std::cout << "[ I LOVE HAVING EXTRA BACON FOR MY 7XL-DOUBLE-CHEESE-TRIPLE-PICKLE-SPECIAL KETCHUP BURGER. I REALLY DO! ]" << std::endl;
}
	
void	Harl::info(void) {
	std::cout << "[ I CANNOT BELIEVE ADDING EXTRA BACON COSTS MORE MONEY. YOU DIDN’T PUT ENOUGH BACON IN MY BURGER! IF YOU DID, I WOULDN’T BE ASKING FOR MORE! ]" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[ I THINK I DESERVE TO HAVE SOME EXTRA BACON FOR FREE. I’VE BEEN COMING FOR YEARS WHEREAS YOU STARTED WORKING HERE SINCE LAST MONTH. ]" << std::endl;
}

void	Harl::error(void) {
	std::cout << "[ THIS IS UNACCEPTABLE! i WANT TO SPEAK TO THE MANAGER NOW. ]" << std::endl;
}

void	Harl::complain(std::string level) {

	int	i = 0;
	annoy ptr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string messages[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	while (i < 4) {
		if (messages[i] == level )
			break ;
		i++;
	}
	
	switch (i) {
		case 0:
			(this->*ptr[i])();
			break ;
		case 1:
			(this->*ptr[i])();
			break ;
		case 2:
			(this->*ptr[i])();
			break ;
		case 3:
			(this->*ptr[i])();
			break ;
		default:
			std::cout << "[ PROBABLY COMPLAINING ABOUT INSIGNIFICANT PROBLEMS ]" << std::endl;
	}
}

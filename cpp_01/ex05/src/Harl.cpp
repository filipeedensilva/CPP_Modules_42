/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:15:02 by feden-pe          #+#    #+#             */
/*   Updated: 2024/06/25 20:11:31 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void	Harl::debug(void) {
	std::cout << "[ I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do! ]" << std::endl;
}
	
void	Harl::info(void) {
	std::cout << "[ I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more! ]" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[ I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month. ]" << std::endl;
}

void	Harl::error(void) {
	std::cout << "[ This is unacceptable! I want to speak to the manager now. ]" << std::endl;
}

void	Harl::complain(std::string level) {

	int	i = 0;
	annoy ptr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string messages[4] = { "DEGUB", "INFO", "WARNING", "ERROR" };

	while (i < 4) {
		if (level == messages[i])
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
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

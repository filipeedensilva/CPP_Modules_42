/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:15:09 by feden-pe          #+#    #+#             */
/*   Updated: 2024/06/25 20:04:15 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"
#include <iostream>

int main(void)
{
	Harl harl;
	std::string input;

	std::cout << "WELCOME TO HARL'S COMPLAINTS! ENTER A COMPLAINT FOR HARL TO PROCESS: ";
	while (std::cin >> input)
	{
		harl.complain(input);
		std::cout << "ENTER A COMPLAINT FOR HARL TO PROCESS: ";
	}

	return (0);
}

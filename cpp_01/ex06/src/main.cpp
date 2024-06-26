/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:15:09 by feden-pe          #+#    #+#             */
/*   Updated: 2024/06/26 15:46:05 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac == 2) {
		std::string input = av[1];
		harl.complain(input);
	}
	else {
		std::cout << "Error: Incorrect number of arguments!" << std::endl;
		return (1);
	}

	return (0);
}

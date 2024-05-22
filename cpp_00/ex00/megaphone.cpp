/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:17:30 by feden-pe          #+#    #+#             */
/*   Updated: 2024/05/07 13:19:39 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main(int ac, char **av)
{
	int	i = 1;
	int	j = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[i + 1]) {
			j = 0;
			while (av[i][j])
				std::cout << (char)std::toupper(av[i][j++]);
			std::cout << " ";
			i++;
		}
		j = 0;
		while (av[i][j])
			std::cout << (char)std::toupper(av[i][j++]);
		std::cout << std::endl;
	}
}

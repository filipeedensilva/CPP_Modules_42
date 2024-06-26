/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:23:47 by feden-pe          #+#    #+#             */
/*   Updated: 2024/06/24 17:35:20 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int ac, char **av) {
	if (ac != 4)
	{
		std::cout << "Error: Wrong number of arguments!" << std::endl;
		return (1);
	}

	std::ifstream input(av[1]);

	if (!input.is_open())
	{
		std::cout << "Error: file doesn't exist!" << std::endl;
		return (2);
	}

	std::string line;
	std::string buffer;

	while (getline(input, line))
		buffer.append(line + '\n');

	input.close();

	std::string	find;
	std::string	replace;

	find = av[2];
	replace = av[3];

	size_t	i = 0;
	while ((i = buffer.find(find, i)) != std::string::npos)
	{
		buffer.erase(i, find.size());
		buffer.insert(i, replace);
	}

	std::string file_replace;

	file_replace= av[1];
	file_replace.append(".replace");

	const char *file_name = file_replace.c_str();

	std::ofstream output(file_name);

	output << buffer;
}

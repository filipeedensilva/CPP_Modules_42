/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 13:28:49 by feden-pe          #+#    #+#             */
/*   Updated: 2024/06/22 13:47:23 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string &stringREF = str;
	std::string *stringPTR = &str;

	std::cout << "Memory address of str: " << &str << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;
	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;

	std::cout << std::endl << "Value of str: " << str << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;
}

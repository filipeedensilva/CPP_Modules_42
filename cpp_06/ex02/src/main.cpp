/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:34:45 by feden-pe          #+#    #+#             */
/*   Updated: 2025/01/27 17:35:15 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base	*generate(void) {
	int	i = std::rand() % 3;
	
	switch(i) {
		case 0 :
			return (new A());
		case 1 :
			return (new B());
		default :
			return (new C());
	}
	std::cout << "Error: Something went wrong!" << std::endl;
}

void	identify(Base *ptr) {
	if (dynamic_cast<A *>(ptr))
		std::cout << "A pointer" << std::endl;
	else if (dynamic_cast<B *>(ptr))
		std::cout << "B pointer" << std::endl;
	else if (dynamic_cast<C *>(ptr))
		std::cout << "C pointer" << std::endl;
	else
		std::cout << "Error: Something went wrong!" << std::endl;
}

void	identify(Base& ptr) {
	try {
		(void)dynamic_cast<A&>(ptr);
		std::cout << "A reference" << std::endl;
	}
	catch (const std::exception &eA) {
		try {
			(void)dynamic_cast<B&>(ptr);
			std::cout << "B reference" << std::endl;
		}
		catch (const std::exception &eB) {
			try {
				(void)dynamic_cast<C&>(ptr);
				std::cout << "C reference" << std::endl;
			}
			catch (const std::exception &eC) {
				std::cout << "Unknown" << std::endl;
			}
		}
	}
}

int main(void) {
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		Base *base = generate();
		identify(base);
		identify(*base);
		delete base;
	}
	return (0);
}

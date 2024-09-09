/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:29:53 by feden-pe          #+#    #+#             */
/*   Updated: 2024/09/09 16:31:54 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/AAnimal.hpp"

int main(void)
{
	// AAnimal a = new Cat();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;
	delete i;

	std::cout << std::endl << "==================================" << std::endl << std::endl;

	AAnimal *pets[10];
	for (int i = 0; i < 10; i++) {
		if (i < 5)
			pets[i] = new Dog();
		else
			pets[i] = new Cat();
		pets[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
		delete pets[i];

	std::cout << std::endl << "==================================" << std::endl << std::endl;

	Dog skye;
	skye.setIdea("I love to play with the ball!\n");
	std::cout << skye.getIdea(0);
	skye.setIdea("I need to take care of my pups!\n");
	std::cout << skye.getIdea(1);	
	std::cout << skye.getIdea(2); // no idea.

	Dog fakeSkye(skye);
	std::cout << fakeSkye.getType() << std::endl;
	std::cout << fakeSkye.getIdea(0);
	std::cout << fakeSkye.getIdea(1);

	std::cout << std::endl << "==================================" << std::endl << std::endl;
}

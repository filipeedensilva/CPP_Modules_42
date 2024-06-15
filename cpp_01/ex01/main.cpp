/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:20:10 by feden-pe          #+#    #+#             */
/*   Updated: 2024/06/11 20:23:52 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *tmp = new Zombie;
	tmp->setName("Rui");
	tmp->announce();
	delete tmp;
	
	Zombie *create = zombieHorde(5, "Zombiesss");
	for (int i = 0; i < 5; i++)
		create[i].announce();
}

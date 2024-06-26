/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:20:10 by feden-pe          #+#    #+#             */
/*   Updated: 2024/06/26 15:54:29 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie tmp;
	tmp.setName("Rui");
	tmp.announce();

	Zombie *create = newZombie("Lol");
	randomChump("Lel");
	create->announce();
	delete create;
}

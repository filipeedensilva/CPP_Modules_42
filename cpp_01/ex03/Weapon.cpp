/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:19:49 by feden-pe          #+#    #+#             */
/*   Updated: 2024/06/24 16:01:46 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name): _type(name){
}

Weapon::~Weapon(){

}

const std::string	Weapon::getType(void) {
	return (this->_type);
}

void	Weapon::setType(std::string name) {
	this->_type = name;
}

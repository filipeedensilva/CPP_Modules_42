/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:01:30 by feden-pe          #+#    #+#             */
/*   Updated: 2024/06/24 15:34:04 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA {
	private:
		std::string	_name;
		Weapon	&_weapon;
	public:
		HumanA(std:: string name, Weapon &weapon);
		~HumanA();
		void	attack(void);
};

#endif

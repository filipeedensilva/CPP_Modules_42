/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 13:53:41 by feden-pe          #+#    #+#             */
/*   Updated: 2024/06/24 15:59:33 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

# include <iostream>

class	Weapon {

	private:
		std::string	_type;

	public:
		Weapon(std::string name);
		~Weapon();

		const std::string getType(void);
		void		setType(std::string name);
};

#endif

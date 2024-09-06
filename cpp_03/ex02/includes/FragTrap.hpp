#ifndef FragTrap_HPP
# define FragTrap_HPP

# include <iostream>
# include <string>
# include <exception>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &copy);
		~FragTrap();

		void	highFivesGuys(void);
};

#endif

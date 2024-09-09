#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <exception>
# include <string>
# include "Brain.hpp"

class AAnimal
{
	protected:
		std::string	type;
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(const AAnimal &copy);
		virtual ~AAnimal();

		virtual void	makeSound(void) const = 0;
		std::string		getType(void);
};

#endif

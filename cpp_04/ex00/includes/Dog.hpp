#ifndef Dog_HPP
# define Dog_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
		~Dog();
		
		void	makeSound(void) const;
};

#endif

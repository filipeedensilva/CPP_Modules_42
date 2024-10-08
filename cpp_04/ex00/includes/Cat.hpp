#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &copy);
		~Cat();

		void	makeSound(void) const;
};

#endif

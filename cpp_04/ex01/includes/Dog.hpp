#ifndef Dog_HPP
# define Dog_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
		~Dog();
		
		void		makeSound(void) const;
		void		setIdea(std::string str);
		std::string	getIdea(int i) const;
};

#endif

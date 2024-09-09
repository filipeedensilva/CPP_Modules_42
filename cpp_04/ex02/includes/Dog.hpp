#ifndef Dog_HPP
# define Dog_HPP

# include <iostream>
# include <string>
# include <exception>
# include "AAnimal.hpp"

class Dog : public AAnimal
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

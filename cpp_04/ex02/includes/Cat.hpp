#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "AAnimal.hpp"

class Cat : public AAnimal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &copy);
		~Cat();

		void		makeSound(void) const;
		void		setIdea(std::string str);
		std::string	getIdea(int i) const;
};

#endif

#ifndef WRONGNANIMAL_HPP
# define WRONGNANIMAL_HPP

# include <iostream>
# include <exception>
# include <string>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal(const std::string name);
		WrongAnimal &operator=(const WrongAnimal &copy);
		~WrongAnimal();

		void		makeSound(void) const;
		std::string	getType(void);
};

#endif

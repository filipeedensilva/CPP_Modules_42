#include "../includes/WrongAnimal.hpp"
#include <string>

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	// Don't forget to copy the variables here
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
	(void)copy;
	std::cout << "WrongAnimal operator= called" << std::endl;
	// Don't forget to copy the variables here
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Beep Beep Beep" << std::endl;
}

std::string	WrongAnimal::getType(void) {
	return (this->type);
}

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &copy) {
	(void)copy;
	std::cout << "AAnimal operator= called" << std::endl;
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

void	AAnimal::makeSound(void) const {
	std::cout << "WAAAAAAAAAAAAZ" << std::endl;
}

std::string	AAnimal::getType(void) {
	return (this->type);
}

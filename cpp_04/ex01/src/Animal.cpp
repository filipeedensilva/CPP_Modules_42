#include "../includes/Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &copy) {
	(void)copy;
	std::cout << "Animal operator= called" << std::endl;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void) const {
	std::cout << "WAAAAAAAAAAAAZ" << std::endl;
}

std::string	Animal::getType(void) {
	return (this->type);
}

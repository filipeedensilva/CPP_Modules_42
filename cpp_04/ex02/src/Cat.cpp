#include "../includes/Cat.hpp"
#include <string>

Cat::Cat() : AAnimal() {
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy) : AAnimal(copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*copy.brain);
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy) {
	if (this != &copy) {
		this->type = copy.type;
	delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

void	Cat::makeSound(void) const {
	std::cout << "Meowwwwww" << std::endl;
}

void	Cat::setIdea(std::string str) {
	this->brain->setIdea(str);
}

std::string	Cat::getIdea(int i) const {
	return (this->brain->getIdea(i));
}

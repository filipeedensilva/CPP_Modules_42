#include "../includes/Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*copy.brain);
	*this = copy;
}

Dog &Dog::operator=(const Dog &copy) {
	if (this != &copy) {
		this->type = copy.type;
		delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete	this->brain;
}

void	Dog::makeSound(void) const {
	std::cout << "Woof woof woof" << std::endl;
}

void	Dog::setIdea(std::string str) {
	this->brain->setIdea(str);
}

std::string	Dog::getIdea(int i) const {
	return (this->brain->getIdea(i));
}

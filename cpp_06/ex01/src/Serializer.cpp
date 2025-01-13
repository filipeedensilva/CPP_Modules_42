#include "../includes/Serializer.hpp"

Serializer::Serializer() {
	std::cout << "Serializer constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &copy) {
	std::cout << "Serializer copy constructor called" << std::endl;
	*this = copy;
}

Serializer &Serializer::operator=(const Serializer &copy) {
	(void)copy;
	return (*this);
}

Serializer::~Serializer() {
	std::cout << "Serializer destructor called" << std::endl;
}

#include "../includes/Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	*this = copy;
}

Brain &Brain::operator=(const Brain &copy) {
	(void)copy;
	std::cout << "Brain operator= called" << std::endl;
	*this->ideas = *copy.ideas;
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdea(std::string str) {
	for	(int i = 0; i < 100; i++) {
		if (this->ideas[i].empty()) {
			this->ideas[i] = str;
			break ;
		}
	}
}

std::string	Brain::getIdea(int i) const {
	if (this->ideas[i].empty())
		return ("Brain has no ideas at this moment\n");
	return (this->ideas[i]);
}

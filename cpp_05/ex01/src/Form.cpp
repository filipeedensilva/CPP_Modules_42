#include "../includes/Form.hpp"

Form::Form() {
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form &copy) {
	std::cout << "Form copy constructor called" << std::endl;
	// Don't forget to copy the variables here
	*this = copy;
}

Form &Form::operator=(const Form &copy) {
	std::cout << "Form operator= called" << std::endl;
	(void)copy;
	return (*this);
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

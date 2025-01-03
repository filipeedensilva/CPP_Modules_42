#include "../includes/Intern.hpp"
#include "../includes/AForm.hpp"

Intern::Intern() {
	_form_name[0] = "ShrubberyCreationForm";
	_form_name[1] = "RobotomyRequestForm";
	_form_name[2] = "PresidentialPardonForm";
}

Intern::Intern(const Intern &copy) {
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
}

Intern &Intern::operator=(const Intern &copy) {
	(void)copy;
	return (*this);
}

Intern::~Intern() { }

AForm*	Intern::makeForm(std::string name, std::string target) {

	int	index = 3;

	for (int i = 0; i < 3; i++) {
		if (name == _form_name[i]) {
			std::cout << "Intern created: " << name << std::endl;
			index = i;
		}
	}
	switch (index) {
		case (0):
					return (new ShrubberyCreationForm(target));
		case (1):
					return (new RobotomyRequestForm(target));
		case (2):
					return (new PresidentialPardonForm(target));
		default:
					std::cout << "Intern couldn't create form, exception: " << std::endl;
					throw FormDoesntExist();
	}
}

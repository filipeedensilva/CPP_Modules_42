#include "../includes/Intern.hpp"
#include "../includes/AForm.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern &copy) {
	std::cout << "Intern copy constructor called" << std::endl;
	// Don't forget to copy the variables here
	*this = copy;
}

Intern &Intern::operator=(const Intern &copy) {
	return (*this);
}

Intern::~Intern() { }

AForm*		makePresident(std::string target) {
	return (new PresidentialPardonForm(target));
}

AForm*		makeRobotomy(std::string target) {
	return (new RobotomyRequestForm(target));
}

AForm*		makeShrubbery(std::string target) {
	return (new ShrubberyCreationForm(target));
}

void	Intern::makeForm(std::string name, std::string target) {
	std::string	form[3] = { "RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm" };

	for (int i = 0; i < 3; i++) {
		if (name == form[i]) {
			std::cout << "Intern created: " << form[i] << std::endl;
		}
	}
	std::cout << "Intern couldn't create form, exception: " << std::endl;
	throw FormDoesntExist();
}

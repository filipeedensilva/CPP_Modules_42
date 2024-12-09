#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default") {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy) {
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
	if (this != &copy) {
		const_cast<std::string&>(this->_target) = copy._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

std::string	PresidentialPardonForm::getTarget(void) const {
	return (this->_target);
}

void	PresidentialPardonForm::formExec(void) const {
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

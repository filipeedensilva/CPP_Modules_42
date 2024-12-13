#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default") {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy) {
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
	if (this != &copy) {
		const_cast<std::string&>(this->_target) = copy._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

std::string	RobotomyRequestForm::getTarget(void) const {
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &b) const {
	beExecuted(b);
	srand(time(0));
	int	randomValue = std::rand();

	if (randomValue % 2 == 0)
		std::cout << getTarget() << " has been robotomized succesfully!" << std::endl;
	else
		std::cout << getTarget() << "'s robotomy has drastically failed." << std::endl;
}

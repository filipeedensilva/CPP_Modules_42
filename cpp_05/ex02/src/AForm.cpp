#include "../includes/AForm.hpp"

AForm::AForm() : _name("Finish the day early"), _isSigned(false), _sign(50), _exec(10) {
	std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm(const std::string name, int sign, int exec) :
_name(name), _isSigned(false), _sign(sign), _exec(exec) {
	if (_exec > 150 || _sign > 150)
		throw AForm::GradeTooLowException();
	else if (_exec < 1 || _sign < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &copy) : _name(copy._name), _isSigned(copy._isSigned), _sign(copy._sign), _exec(copy._exec) {
	*this = copy;
}

AForm &AForm::operator=(const AForm &copy) {
	*this = copy;
	return (*this);
}

AForm::~AForm() {}

std::string	AForm::getName(void) const {
	return (this->_name);
}

bool		AForm::getIsSigned(void) const {
	return (this->_isSigned);
}

int			AForm::getSign(void) const {
	return (this->_sign);
}

int			AForm::getExec(void) const {
	return (this->_exec);
}

void		AForm::beSigned(Bureaucrat &b) {
	if (b.getGrade() > this->getSign())
		throw AForm::GradeTooLowException();
	if (_isSigned == true)
		throw AForm::FormAlreadySigned();
	_isSigned = true;
}

void	AForm::formExec(void) const {
	std::cout << "Form executed" << std::endl;
}

void	AForm::execute(Bureaucrat &b) const {
	if (_isSigned == false)
		std::cout << this->getName() << " hasn't been signed" << std::endl;
	else if (b.getGrade() > _exec)
		std::cout << b.getName() << " doesn't meet the requirements to execute form: " << this->getName() << std::endl;
	else
	 	formExec();
}

std::ostream& operator<<(std::ostream &out, const AForm &f) {
	out << "Form: " << f.getName() << std::endl;
	return (out);
}

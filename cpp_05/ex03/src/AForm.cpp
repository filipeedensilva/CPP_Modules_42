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

void	AForm::execute(Bureaucrat const &b) const {
	std::cout << b << "Form executed" << std::endl;
}

void	AForm::beExecuted(Bureaucrat const &b) const {
	if (_isSigned == false)
		throw AForm::FormNotSigned();
	else if (b.getGrade() > _exec)
		throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, const AForm &f) {
	out << f.getName() << std::endl;
	return (out);
}

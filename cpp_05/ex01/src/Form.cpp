#include "../includes/Form.hpp"

Form::Form() : _name("Finish the day early"), _isSigned(false), _requireSign(50), _requireExecute(10) {
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(const std::string name, int required, int execute) :
_name(name), _isSigned(false), _requireSign(required), _requireExecute(execute) {
	if (_requireExecute > 150 || _requireSign > 150)
		throw Form::GradeTooLowException();
	else if (_requireExecute < 1 || _requireSign < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &copy) : _name(copy._name), _isSigned(copy._isSigned), _requireSign(copy._requireSign), _requireExecute(copy._requireExecute) {
	std::cout << "Form copy constructor called" << std::endl;
	*this = copy;
}

Form &Form::operator=(const Form &copy) {
	if (this != &copy) {
		const_cast<int&>(_requireSign) = copy._requireSign;
		const_cast<int&>(_requireExecute) = copy._requireExecute;
		const_cast<std::string&>(_name) = copy._name;
	}
	return (*this);
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

std::string	Form::getName(void) const {
	return (this->_name);
}

bool		Form::getIsSigned(void) const {
	return (this->_isSigned);
}

int			Form::getSign(void) const {
	return (this->_requireSign);
}

int			Form::getExecute(void) const {
	return (this->_requireExecute);
}

void		Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() > this->getSign())
		throw Form::GradeTooLowException();
	if (_isSigned == true)
		throw Form::FormAlreadySigned();
	_isSigned = true;
}

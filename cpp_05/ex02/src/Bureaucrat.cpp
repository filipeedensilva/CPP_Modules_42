/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:51:14 by feden-pe          #+#    #+#             */
/*   Updated: 2024/11/22 18:57:01 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Winnie"), _grade(150) {
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade) {
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
	if (this != &copy) {
		_grade = copy._grade;
		const_cast<std::string&>(_name) = copy._name;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {
}

std::string	Bureaucrat::getName(void) const {
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

void		Bureaucrat::gradeDecrement(void) {
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

void		Bureaucrat::gradeIncrement(void) {
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void		Bureaucrat::signForm(AForm &f) {
	try {
		f.beSigned(*this);
		std::cout << _name << " signed form: " << f.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->_name << " couldn't sign form: " << f.getName()
		<< ", exception: " << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(const AForm &form) {
	try {
		form.execute(*this);
		std::cout << getName() << " executed form: " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << getName() << " couldn't execute form: " << form.getName() <<
		", exception: " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat &b) {
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (out);
}

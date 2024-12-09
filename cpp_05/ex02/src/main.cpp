#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include <iostream>

int main(void) {

	PresidentialPardonForm ew("barrega");
	Bureaucrat micka("Micka", 1);
	ShrubberyCreationForm lol("helle");

	lol.beSigned(micka);
	lol.execute(micka);
	ew.beSigned(micka);
	ew.execute(micka);

	return (0);
}

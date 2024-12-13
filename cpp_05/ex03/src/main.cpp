#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

int main(void) {

	PresidentialPardonForm ew("barrega");
	Bureaucrat micka("Micka", 1);
	ShrubberyCreationForm lol("helle");
	RobotomyRequestForm high("robot");

	lol.beSigned(micka);
	lol.execute(micka);
	ew.beSigned(micka);
	ew.execute(micka);
	high.beSigned(micka);
	high.execute(micka);

	return (0);
}

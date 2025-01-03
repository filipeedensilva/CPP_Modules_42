#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

int main(void) {

	AForm* doc1;
	try
	{
		Intern johnny;
		doc1 = johnny.makeForm("RobotomyRequestForm", "Malandro");
		Bureaucrat tim("Tim", 1);
		std::cout << tim << std::endl;
		tim.signForm(*doc1);
		tim.executeForm(*doc1);
		
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	if (doc1)
		delete doc1;

	return (0);
}

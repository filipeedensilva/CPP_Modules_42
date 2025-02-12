#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

int main(void) {

	AForm* form;
	try
	{
		Intern vasco;
		form = vasco.makeForm("RobotomyRequestForm", "Malandro");
		Bureaucrat rodrigo("Rodrigo", 1);
		std::cout << rodrigo << std::endl;
		rodrigo.signForm(*form);
		rodrigo.executeForm(*form);
		
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	if (form)
		delete form;

	return (0);
}

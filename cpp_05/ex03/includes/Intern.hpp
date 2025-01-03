#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <exception>
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"


class Intern
{
	private:
		std::string		_form_name[3];

	public:
		Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &copy);
		~Intern();

		AForm*	makeForm(std::string name, std::string target);

		class FormDoesntExist : public std::exception {
			public:
				const char* what() const throw() {
					return ("Form doesn't exist!");
				}
		};
};

#endif

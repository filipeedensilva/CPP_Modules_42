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

	public:
		Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &copy);
		~Intern();

		void	makeForm(std::string name, std::string target);

		class FormDoesntExist : public std::exception {
			public:
				const char* what() const throw() {
					return ("Form doesn't exist!");
				}
		};
};

#endif

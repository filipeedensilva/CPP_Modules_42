#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string const	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();

		std::string	getTarget(void) const;
		void		formExec(void) const;
};

#endif

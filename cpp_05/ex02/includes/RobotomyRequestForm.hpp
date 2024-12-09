#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cstdlib>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		const std::string	_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();

		std::string	getTarget(void) const;
		void		formExec(void) const;
};

#endif

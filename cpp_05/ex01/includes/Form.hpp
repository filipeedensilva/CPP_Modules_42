#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <ostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_requireSign;
		const int			_requireExecute;

	public:
		Form();
		Form(const std::string name, int required, int execute);
		Form(const Form &copy);
		Form &operator=(const Form &copy);
		~Form();

		std::string		getName(void) const;
		bool			getIsSigned(void) const;
		int				getSign(void) const;
		int				getExecute(void) const;

		void			beSigned(Bureaucrat &b);

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw() {
					return ("Grade is too high!");
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw() {
					return ("Grade is too low!");
				}
		};
		class FormAlreadySigned : public std::exception {
			public:
				const char* what() const throw() {
					return ("Form is already signed");
				}
		};
};

std::ostream& operator<<(std::ostream &out, const Form &f);

#endif

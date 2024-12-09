#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <ostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_sign;
		const int			_exec;

	public:
		AForm();
		AForm(const std::string name, int sign, int exec);
		AForm(const AForm &copy);
		AForm &operator=(const AForm &copy);
		virtual ~AForm();

		std::string		getName(void) const;
		bool			getIsSigned(void) const;
		int				getSign(void) const;
		int				getExec(void) const;

		void			beSigned(Bureaucrat &b);

		virtual void	formExec(void) const = 0;
		void			execute(Bureaucrat &b) const;

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

std::ostream& operator<<(std::ostream &out, const AForm &f);

#endif

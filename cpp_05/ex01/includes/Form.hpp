#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signedGrade;
		const int			_signedExecute;

	public:
		Form();
		Form(const Form &copy);
		Form &operator=(const Form &copy);
		~Form();

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
};

#endif

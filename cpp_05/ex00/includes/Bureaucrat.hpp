#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <ostream>
# include <string>
# include <exception>

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat(const std::string name, int grade);

		std::string		getName(void) const;
		int				getGrade(void) const;
		void			gradeIncrement(void);
		void			gradeDecrement(void);

		class GradeTooHighException : public std::exception  {
			public:
				const char* what() const throw() {
					return ("Grade is too high!");
				}
		};

		class GradeTooLowException : public std::exception  {
			public:
				const char* what() const throw() {
					return ("Grade is too low!");
				}
		};
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b);

#endif

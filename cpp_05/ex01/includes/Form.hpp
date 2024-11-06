#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

class Form
{
	private:

	public:
		Form();
		Form(const Form &copy);
		Form &operator=(const Form &copy);
		~Form();
};

#endif

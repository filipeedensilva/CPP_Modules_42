#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <exception>

class Brain {
	protected:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);
		~Brain();

		void		setIdea(std::string str);
		std::string	getIdea(int i) const;
};

#endif

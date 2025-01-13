#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <exception>

class Serializer
{
	private:

	public:
		Serializer();
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &copy);
		~Serializer();
};

#endif

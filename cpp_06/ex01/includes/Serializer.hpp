#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <exception> 
# include <stdint.h>

typedef struct	s_data {
	int 		d;
}	Data;

class Serializer
{
	private:

	public:
		Serializer();
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &copy);
		~Serializer();

		static uintptr_t serialize(Data *data);
		static Data *deserialize(uintptr_t ptr);
};

#endif

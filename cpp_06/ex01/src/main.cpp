#include "../includes/Serializer.hpp"

int main(void) {
	Data	data;

	data.d = 42;
	
	Data		*d_ptr;
	uintptr_t	u_ptr;

	d_ptr = &data;
	u_ptr = Serializer::serialize(d_ptr);
	d_ptr = Serializer::deserialize(u_ptr);

	std::cout << d_ptr->d << std::endl;
	return (0);
}

#include "../includes/Serializer.hpp"

Serializer::Serializer() {
}

Serializer::Serializer(const Serializer &copy) {
	*this = copy;
}

Serializer &Serializer::operator=(const Serializer &copy) {
	(void)copy;
	return (*this);
}

Serializer::~Serializer() {
}

uintptr_t	Serializer::serialize(Data *data) {
	return (reinterpret_cast<uintptr_t>(data));
}

Data	*Serializer::deserialize(uintptr_t ptr) {
	return (reinterpret_cast<Data *>(ptr));
}

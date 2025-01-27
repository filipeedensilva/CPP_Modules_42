#include "../includes/A.hpp"

A::A() {
}

A::A(const A &copy) {
	*this = copy;
}

A &A::operator=(const A &copy) {
	(void)(copy);
	return (*this);
}

A::~A() {
}

#include "../includes/B.hpp"

B::B() {
}

B::B(const B &copy) {
	*this = copy;
}

B &B::operator=(const B &copy) {
	(void)(copy);
	return (*this);
}

B::~B() {
}

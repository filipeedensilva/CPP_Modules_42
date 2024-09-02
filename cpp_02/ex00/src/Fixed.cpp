#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_num_value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_num_value = copy.getRawBits();
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	(void)copy;
	std::cout << "Copy assignment operator called" << std::endl;
	this->_num_value = copy.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Fixed destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_num_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits memeber funtion called" << std::endl;
	this->_num_value = raw;
}

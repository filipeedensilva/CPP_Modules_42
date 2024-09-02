#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Integer constructor called" << std::endl;
	this->_fixed_value = value << _num_bits; 
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_value = roundf(value * (1 << _num_bits)) ;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_value = copy.getRawBits();
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	(void)copy;
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_value = copy.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Fixed destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member funtion called" << std::endl;
	this->_fixed_value = raw;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(_fixed_value) / (1 << _num_bits);
}

int		Fixed::toInt(void) const
{
	return (_fixed_value >> _num_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& tmp)
{
	os << tmp.toFloat();
	return (os);
}

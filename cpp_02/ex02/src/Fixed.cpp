#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	this->_fixed_value = 0;
}

Fixed::Fixed(const int value)
{
	this->_fixed_value = value << _num_bits; 
}

Fixed::Fixed(const float value)
{
	this->_fixed_value = roundf(value * (1 << _num_bits)) ;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	this->_fixed_value = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
}

int		Fixed::getRawBits(void) const
{
	return (this->_fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
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

bool	Fixed::operator>(const Fixed& fixed) {
	return (this->_fixed_value > fixed._fixed_value);
}

bool	Fixed::operator>=(const Fixed& fixed) {
	return (this->_fixed_value >= fixed._fixed_value);
}

bool	Fixed::operator<(const Fixed& fixed) {
	return (this->_fixed_value < fixed._fixed_value);
}

bool	Fixed::operator<=(const Fixed& fixed) {
	return (this->_fixed_value <= fixed._fixed_value);
}

bool	Fixed::operator==(const Fixed& fixed) {
	return (this->_fixed_value == fixed._fixed_value);
}

bool	Fixed::operator!=(const Fixed& fixed) {
	return (this->_fixed_value != fixed._fixed_value);
}

Fixed	Fixed::operator+(const Fixed& fixed) {
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& fixed) {
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& fixed) {
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& fixed) {
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed&	Fixed::operator++() {
	this->_fixed_value++;
	return (*this);
}

Fixed&	Fixed::operator--() {
	this->_fixed_value--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);
	this->_fixed_value--;
	return (tmp);
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);
	this->_fixed_value++;
	return (tmp);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	return((a.toFloat() < b.toFloat()) ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return((a.toFloat() < b.toFloat()) ? a : b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	return((a.toFloat() > b.toFloat()) ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return((a.toFloat() > b.toFloat()) ? a : b);
}

#include "Fixed.hpp"

Fixed::Fixed(): _fixed_value(0) {}
Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}
Fixed::~Fixed(){}

Fixed&	Fixed::operator=(const Fixed& rhs)
{
	this->_fixed_value = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits() const
{
	return this->_fixed_value;
}

void	Fixed::setRawBits(const int raw)
{
	this->_fixed_value = raw;
}

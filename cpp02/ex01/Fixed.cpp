#include<cmath>
#include "Fixed.hpp"

Fixed::Fixed(): _fixed_value(0) {}

Fixed::Fixed(const int n)
{
	this->_fixed_value = n << this->_fract;
}

Fixed::Fixed(const float f)
{
	this->_fixed_value = roundf(f * (1 << this->_fract));
}

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

float	Fixed::toFloat() const
{
	return (double)this->_fixed_value / (double)(1 << this->_fract);
}

int				Fixed::toInt() const
{
	return this->_fixed_value >> this->_fract;
}

std::ostream&	operator<<(std::ostream& o , const Fixed& rhs)
{
	o << rhs.toFloat(); //temporary, what it has to show is " a floating point representation of the fixed point value "
	return o;
}

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

/*
**Member fucntions
*/
int				Fixed::getRawBits() const
{
	return this->_fixed_value;
}

void			Fixed::setRawBits(const int raw)
{
	this->_fixed_value = raw;
}

float			Fixed::toFloat() const
{
	return (double)this->_fixed_value / (double)(1 << this->_fract);
}

int				Fixed::toInt() const
{
	return this->_fixed_value >> this->_fract;
}

/*
**Overload operators
*/
Fixed&			Fixed::operator=(const Fixed& rhs)
{
	this->_fixed_value = rhs.getRawBits();
	return *this;
}

Fixed			Fixed::operator+(const Fixed& rhs) const
{
	Fixed add(this->toFloat() + rhs.toFloat());
	return (add);
}

Fixed			Fixed::operator-(const Fixed& rhs) const
{
	Fixed less(this->toFloat() - rhs.toFloat());
	return (less);
}

Fixed			Fixed::operator*(const Fixed& rhs) const
{
	Fixed prod(this->toFloat() * rhs.toFloat());
	return (prod);
}

Fixed			Fixed::operator/(const Fixed& rhs) const
{
	Fixed div(this->toFloat() / rhs.toFloat());
	return (div);
}

bool			Fixed::operator==(const Fixed& rhs) const
{
	if (this->_fixed_value == rhs.getRawBits())
		return true;
	return false;
}

bool			Fixed::operator!=(const Fixed& rhs) const
{
	if (*this == rhs)
		return false;
	return true;
}

bool			Fixed::operator>(const Fixed& rhs) const
{
	if (this->_fixed_value > rhs.getRawBits())
		return true;
	return false;
}

bool			Fixed::operator>=(const Fixed& rhs) const
{
	if (*this > rhs || *this == rhs)
		return true;
	return false;
}

bool			Fixed::operator<(const Fixed& rhs) const
{
	if (this->_fixed_value < rhs.getRawBits())
		return true;
	return false;
}

bool			Fixed::operator<=(const Fixed& rhs) const
{
	if (*this < rhs || *this == rhs)
		return true;
	return false;
}

Fixed&			Fixed::operator++()
{
	this->_fixed_value++;
	return *this;
}

Fixed			Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed&			Fixed::operator--()
{
	this->_fixed_value--;
	return *this;
}

Fixed			Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

Fixed&	Fixed::min(Fixed& lhs, Fixed& rhs)
{
	if (lhs >= rhs)
		return rhs;
	return lhs;
}

Fixed&	Fixed::max(Fixed& lhs, Fixed& rhs)
{
	if (lhs >= rhs)
		return lhs;
	return rhs;
}

std::ostream&	operator<<(std::ostream& o , const Fixed& rhs)
{
	o << rhs.toFloat(); //temporary, what it has to show is " a floating point representation of the fixed point value "
	return o;
}

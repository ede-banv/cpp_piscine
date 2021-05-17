#include "Fixed.hpp"

Fixed::Fixed(){}
Fixed::Fixed(Fixed& copy)
{
	*this = copy;
}
Fixed::~Fixed(){}

Fixed&	Fixed::operator=(Fixed const& rhs){}

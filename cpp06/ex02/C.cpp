#include "C.hpp"

C::C(): Base(){}

C::C(const C& copy): Base(copy)
{
	*this = copy;
}

C::~C(){}

C&	C::operator=(const C& rhs)
{
	(void)rhs;
	return *this;
}

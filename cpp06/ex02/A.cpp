#include "A.hpp"

A::A(): Base(){}

A::A(const A& copy): Base(copy)
{
	*this = copy;
}

A::~A(){}

A&	A::operator=(const A& rhs)
{
	(void)rhs;
	return *this;
}

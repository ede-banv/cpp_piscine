#include "Base.hpp"

Base::Base(){}

Base::Base(const Base& copy)
{
	*this = copy;
}

Base::~Base(){}

Base&	Base::operator=(const Base& rhs)
{
	(void)rhs;
	return *this;
}

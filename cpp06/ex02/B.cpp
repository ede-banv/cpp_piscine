#include "B.hpp"

B::B(): Base(){}

B::B(const B& copy): Base(copy)
{
	*this = copy;
}

B::~B(){}

B&	B::operator=(const B& rhs)
{
	(void)rhs;
	return *this;
}

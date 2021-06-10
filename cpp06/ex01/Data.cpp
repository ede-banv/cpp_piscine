#include "Data.hpp"

Data::Data(){}

Data::Data(std::string ptr1, int n, std::string ptr2):
_ptr1(ptr1), _randnum(n), _ptr2(ptr2)
{}

Data::Data(const Data& copy)
{
	*this = copy;
}

Data::~Data(){}

Data&			Data::operator=(const Data& rhs)
{
	this->_ptr1 = rhs._ptr1;
	this->_randnum = rhs._randnum;
	this->_ptr2 = rhs._ptr2;
	return *this;
}

std::string		Data::getString(int n) const
{
	if (n == 1)
		return this->_ptr1;
	if (n == 2)
		return this->_ptr2;
	return NULL;
}

int				Data::getNum() const
{
	return this->_randnum;
}

std::ostream&	operator<<(std::ostream& o, const Data& rhs)
{
	o << "Data:\ns1: " << rhs.getString(1) << "\nnb: " << rhs.getNum() << "\ns2: " << rhs.getString(2) << std::endl;
	return o;
}

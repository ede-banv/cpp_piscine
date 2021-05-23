#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(const std::string& type):
_xp(0), _type(type)
{}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria::~AMateria(){}

AMateria&			AMateria::operator=(const AMateria& rhs)
{
	this->_xp = rhs.getXP();
	return *this;
}

const std::string&	AMateria::getType() const
{
	return this->_type;
}

unsigned int		AMateria::getXP() const
{
	return this->_xp;
}

void				AMateria::use(ICharacter& target)
{
	this->_xp += 10;
}

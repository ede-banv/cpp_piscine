#include "Ice.hpp"

Ice::Ice():AMateria("ice"){}

Ice::Ice(const Ice& copy):AMateria(copy)
{
	*this = copy;
}

Ice::~Ice(){}

Ice&		Ice::operator=(const Ice& rhs)
{
	this->_xp = rhs.getXP();
	this->_type = rhs.getType();
	return *this;
}

AMateria*	Ice::clone() const
{
	return new Ice(*this);
}

void		Ice::use(ICharacter& target)
{
	this->_xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

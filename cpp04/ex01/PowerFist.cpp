#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50){}

PowerFist::PowerFist(const PowerFist& copy): AWeapon(copy)
{
	*this = copy;
}

PowerFist::~PowerFist(){}

PowerFist&	PowerFist::operator=(const PowerFist& rhs)
{
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return *this;
}

void		PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

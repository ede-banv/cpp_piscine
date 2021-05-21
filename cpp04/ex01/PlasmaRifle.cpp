#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21){}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& copy): AWeapon(copy)
{
	*this = copy;
}

PlasmaRifle::~PlasmaRifle(){}

PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle& rhs)
{
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return *this;
}

void			PlasmaRifle::attack() const
{
		std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
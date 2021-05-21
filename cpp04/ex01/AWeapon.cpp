#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string& name, int apcost, int damage)
: _name(name), _apcost(apcost), _damage(damage){}

AWeapon::AWeapon(const AWeapon& copy)
{
	*this = copy;
}

AWeapon::~AWeapon(){}

AWeapon&	AWeapon::operator=(const AWeapon& rhs)
{
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return *this;
}

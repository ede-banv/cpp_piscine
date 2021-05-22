#include "AWeapon.hpp"

AWeapon::AWeapon(){}

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

std::string	AWeapon::getName() const
{
	return this->_name;
}

int			AWeapon::getAPCost() const
{
	return this->_apcost;
}

int			AWeapon::getDamage() const
{
	return this->_damage;
}
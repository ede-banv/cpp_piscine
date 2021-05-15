#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon& club)
{
	this->_danger = &club;
}

void	HumanB::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_danger->getType() << std::endl;
}

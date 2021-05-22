#include "Character.hpp"

Character::Character(){}

Character::Character(const std::string& name): _ap(40), _name(name), _weapon(NULL){}

Character::Character(const Character& copy)
{
	*this = copy;
}

Character::~Character(){}

Character&		Character::operator=(const Character& rhs)
{
	this->_ap = rhs.getAP();
	this->_name = rhs.getName();
	this->_weapon = rhs.getWeapon();
	return *this;
}

void			Character::recoverAP()
{
	if (this->_ap < 40)
	{
		if (40 - this->_ap <= 10)
			this->_ap = 40;
		else
			this->_ap += 10;
	}
}

void			Character::equip(AWeapon* weapon)
{
	this->_weapon = weapon;
}

void			Character::attack(Enemy *enemy)
{
	if (this->_weapon)
	{
		if (this->_ap < this->_weapon->getAPCost())
		{
			std::cout << this->_name << " doesn't have enough AP to attack!" << std::endl;
			return;
		}
		std::cout << this->_name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		this->_ap -= this->_weapon->getAPCost();
	}
}

int				Character::getAP() const
{
	return this->_ap;
}

std::string		Character::getName() const
{
	return this->_name;
}

AWeapon*		Character::getWeapon() const
{
	return this->_weapon;
}

std::ostream&	operator<<(std::ostream& o, Character& rhs)
{
	if (rhs.getWeapon())
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	return o;
}
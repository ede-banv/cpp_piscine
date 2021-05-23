#include "Character.hpp"

Character::Character(){}

Character::Character(std::string name): _name(name){}

Character::Character(const Character& copy)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	*this = copy;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character&			Character::operator=(const Character& rhs)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	this->_name = rhs.getName();
	//copy inventory
	return *this;
}

const std::string&	Character::getName() const
{
	return this->_name;
}

void				Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return;
		}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx]->use(target);
}

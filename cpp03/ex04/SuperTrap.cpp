#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, "SUPR-TP")
{
	std::cout << "Booting sequence complete. Hello! I am your new SUPR-TP assault bot.\n" << std::endl;
}

SuperTrap::SuperTrap(std::string name): ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, name, "SUPR-TP")
{
	std::cout << "Booting sequence complete. Hello! I am your new SUPR-TP assault bot. Designation: " << this->name << ".\n\n";
}

SuperTrap::SuperTrap(const SuperTrap& copy)
{
	*this = copy;
}

SuperTrap::~SuperTrap()
{
	std::cout << "\e[1;33m<SUPR-TP " << this->name << ">\e[0m I have many regrets...	*dies*\n" << std::endl;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap& rhs)
{
	this->hp = rhs.hp;
	this->max_hp = rhs.max_hp;
	this->ep = rhs.ep;
	this->max_ep = rhs.max_ep;
	this->lvl = rhs.lvl;
	this->ranged_dmg = rhs.ranged_dmg;
	this->melee_dmg = rhs.melee_dmg;
	this->armor = rhs.armor;
	this->name = rhs.name;
	this->_bot_type = rhs._bot_type;
	return *this;
}

void		SuperTrap::rangedAttack(const std::string& target)
{
	FragTrap::rangedAttack(target);
}

void		SuperTrap::meleeAttack(const std::string& target)
{
	NinjaTrap::meleeAttack(target);
}

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _bot_type("CL4P-TP")
{
	std::cout << "Booting sequence complete. Hello! I am your new CL4P-TP bot.\n" << std::endl;
}

ClapTrap::ClapTrap(int hp, int max_hp, int ep, int max_ep, int lvl, int melee_dmg, int ranged_dmg, int armor, std::string bot_type):
hp(hp), max_hp(max_hp), ep(ep), max_ep(max_ep), lvl(lvl), melee_dmg(melee_dmg), ranged_dmg(ranged_dmg), armor(armor), _bot_type(bot_type)
{
	std::cout << "Booting sequence complete. Hello! I am your new CL4P-TP bot.\n" << std::endl;
}

ClapTrap::ClapTrap(int hp, int max_hp, int ep, int max_ep, int lvl, int melee_dmg, int ranged_dmg, int armor, std::string name, std::string bot_type):
hp(hp), max_hp(max_hp), ep(ep), max_ep(max_ep), lvl(lvl), melee_dmg(melee_dmg), ranged_dmg(ranged_dmg), armor(armor), name(name), _bot_type(bot_type)
{
	std::cout << "Booting sequence complete. Hello! I am your new CL4P-TP bot. Designation: " << this->name << ".\n\n";
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\e[1;31m<CL4P-TP " << this->name << ">\e[0m I'll die the way I lived: annoying!\n" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
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
	return *this;
}

void		ClapTrap::rangedAttack(const std::string& target)
{
	std::cout << this->_bot_type << " " << this->name << " attacks " << target << " at range, causing " << this->ranged_dmg << " points of damage!" << std::endl;
	std::cout << "\e[1;33m<" << this->_bot_type << " " << this->name << ">\e[0m Bad guy go boom!\n" << std::endl;
}

void		ClapTrap::meleeAttack(const std::string& target)
{
	std::cout << this->_bot_type << " " << this->name << " attacks " << target << " in close combat, causing " << this->melee_dmg << " points of damage!" << std::endl;
	std::cout << "\e[1;33m<" << this->_bot_type << " " << this->name << ">\e[0m Heyyah!\n" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_bot_type << " " << this->name << " takes a hard blow that causes it to lose " << amount - (unsigned)this->armor << " hp!" << std::endl;
	if (amount - (unsigned)this->armor < (unsigned)this->hp)
		this->hp -= amount - this->armor;
	else
		this->hp = 0;
	std::cout << "\e[1;33m<" << this->_bot_type << " " << this->name << ">\e[0m My robotic flesh! AAHH!\n" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_bot_type << " " << this->name << " goes back to the mechanical shop " << amount - (unsigned)this->armor << " hp back!" << std::endl;
	if (amount < (unsigned)this->max_hp - (unsigned)this->hp)
	{
		this->hp += amount;
		std::cout << "\e[1;33m<" << this->_bot_type << " " << this->name << ">\e[0m Back for more!\n" << std::endl;
	}
	else
	{
		this->hp = this->max_hp;
		std::cout << "\e[1;33m<" << this->_bot_type << " " << this->name << ">\e[0m Like new, let's get'em!\n" << std::endl;
	}
}

#include <ctime>
#include <stdlib.h>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap():
_hp(100), _max_hp(100), _ep(50), _max_ep(50), _lvl(1), _melee_dmg(20), _ranged_dmg(15), _armor(3)
{
	std::cout << "Booting sequence complete. Hello! I am your new SC4V-TP defense bot.\n" << std::endl;
}

ScavTrap::ScavTrap(std::string name):
_hp(100), _max_hp(100), _ep(50), _max_ep(50), _lvl(1), _melee_dmg(20), _ranged_dmg(15), _armor(3), _name(name)
{
	std::cout << "Booting sequence complete. Hello! I am your new SC4V-TP defense bot. Designation: " << this->_name << ".\n\n";
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\e[1;31m<SC4V-TP " << this->_name << ">\e[0m I'm too pretty to die!	*dies*\n" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	this->_hp = rhs._hp;
	this->_max_hp = rhs._max_hp;
	this->_ep = rhs._ep;
	this->_max_ep = rhs._max_ep;
	this->_lvl = rhs._lvl;
	this->_ranged_dmg = rhs._ranged_dmg;
	this->_melee_dmg = rhs._melee_dmg;
	this->_armor = rhs._armor;
	this->_name = rhs._name;
	return *this;
}

void		ScavTrap::rangedAttack(const std::string& target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " by throwing a large spiky bouncy ball, causing " << this->_ranged_dmg << " points of damage!" << std::endl;
	std::cout << "\e[1;31m<SC4V-TP " << this->_name << ">\e[0m That looks like it hurts!\n" << std::endl;
}

void		ScavTrap::meleeAttack(const std::string& target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " with a headbutt, causing " << this->_melee_dmg << " points of damage!" << std::endl;
	std::cout << "\e[1;31m<SC4V-TP " << this->_name << ">\e[0m Bop!\n" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "SC4V-TP " << this->_name << " takes the hit full on, losing " << amount - (unsigned)this->_armor << " health points." << std::endl;
	if (amount - (unsigned)this->_armor < (unsigned)this->_hp)
		this->_hp -= amount - this->_armor;
	else
		this->_hp = 0;
	std::cout << "\e[1;31m<SC4V-TP " << this->_name << ">\e[0m Yikes! Ohhoho!\n" << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SC4V-TP " << this->_name << " disappears behind a dirty curtain. After some rather loud whirring and sawing and screwing, it emerges having regained " << amount << " hp." << std::endl;
	if (amount < (unsigned)this->_max_hp - (unsigned)this->_hp)
	{
		this->_hp += amount;
		std::cout << "\e[1;31m<SC4V-TP " << this->_name << ">\e[0m Here we go again!\n" << std::endl;
	}
	else
	{
		this->_hp = this->_max_hp;
		std::cout << "\e[1;31m<SC4V-TP " << this->_name << ">\e[0m You can't keep a good 'bot down!\n" << std::endl;
	}
}

void		ScavTrap::challengeNewcomer(const std::string& target)
{
	static	bool	random = false;
	std::string	challenge_qu[] = {"You versus me! Me versus you! Either way!", "I will prove to you my robotic superiority!",
	"Dance battle! Or, you know... regular battle.", "Man versus machine! Very tiny streamlined machine!",
	"Care to have a friendly duel?"}; // 5
	std::string	challenge[] = {" points to a table nearby that wasn't there before, but now is, and has two enormous piles of hot dogs, at least 50 on each,\
	 a sign above saying \"HOTDOG EATING CONTEST\".", " starts stretching as the lights all around seem to dim, and the floor underfoot starts lighting up with colors, a disco ball descends from the ceiling\
	, right then the first notes to Toxic by Britney Spears start playing.", " challenges you to a rock-paper-scissors battle, best out of 5 wins.",
	" challenges them to a staring battle... Wait is this even fair? How to know where it's looking?",
	" moves aside to reveal the setup to a snail race... Ah, a luck challenge."};
	if (!random)
	{
		std::srand(std::time(0));
		random = true;
	}
	if (this->_ep - 25 < 0)
		std::cout << "\e[1;31m<SC4V-TP " << this->_name << ">\e[0m I'm too tired to duel but, you still can't go through, man.\n" << std::endl;
	else
	{
		this->_ep -= 25;
		std::cout << "As " << target << " nears the entrance to the super secret evil lair, they are intercepted by a tiny scrappy bot." << std::endl;
		std::cout << "\e[1;31m<SC4V-TP " << this->_name << ">\e[0m " << challenge_qu[std::rand() % 5] << std::endl;
		std::cout << "SC4V-TP " << this->_name << challenge[std::rand() % 5] << std::endl << std::endl;
	}

}

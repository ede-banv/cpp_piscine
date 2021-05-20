#include <ctime>
#include <stdlib.h>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, "SC4V-TP")
{
	std::cout << "Booting sequence complete. Hello! I am your new SC4V-TP defense bot.\n" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, name, "SC4V-TP")
{
	std::cout << "Booting sequence complete. Hello! I am your new SC4V-TP defense bot. Designation: " << this->name << ".\n\n";
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)
{
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\e[1;33m<SC4V-TP " << this->name << ">\e[0m I'm too pretty to die!	*dies*\n" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
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
	if (this->ep - 25 < 0)
		std::cout << "\e[1;33m<SC4V-TP " << this->name << ">\e[0m I'm too tired to duel but, you still can't go through, man.\n" << std::endl;
	else
	{
		this->ep -= 25;
		std::cout << "As " << target << " nears the entrance to the super secret evil lair, they are intercepted by a tiny scrappy bot." << std::endl;
		std::cout << "\e[1;33m<SC4V-TP " << this->name << ">\e[0m " << challenge_qu[std::rand() % 5] << std::endl;
		std::cout << "SC4V-TP " << this->name << challenge[std::rand() % 5] << std::endl << std::endl;
	}

}

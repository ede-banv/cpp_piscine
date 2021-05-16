#include "ZombieHorde.hpp"
#include <ctime>
#include <stdlib.h>

ZombieHorde::ZombieHorde(int n): _n(n)
{

	std::string	names[] = {"Harry", "Ginny", "Fred", "Geroge", "Ron", "Hermione",
	"Cho", "Cedric", "Seamus", "Nymphadora", "Goyle", "Crabbe", "Draco", "Fleur", "Severus",
	"James", "Lily", "Peter", "Sirius", "Remus", "Lucius", "Albus", "Minerva", "Charlie",
	"Dolores", "Rubeus", "Tom", "Igor"};
	std::string	types[] = {"hungry", "wizard", "elf", "sorcerer", "paladin", "rogue",
	"druid", "necromancer", "bard", "ranger", "artificier", "vampire", "werewolf", "archer",
	"orc", "tiefling", "thief", "cleric", "dwarf", "warrior", "lumberjack", "webdev"};
	int	nbnames = sizeof(names) / sizeof(std::string);
	int	nbtypes = sizeof(types) / sizeof(std::string);
	std::srand(std::time(0));

	this->horde = new Zombie[this->_n];
	for (int i = 0; i < n; i++)
		horde[i].setZombie(names[std::rand() % nbnames], types[std::rand() % nbtypes]);
}

ZombieHorde::~ZombieHorde()
{
	delete [] horde;
}

void	ZombieHorde::announce() const
{
	for (int i = 0; i < this->_n; i++)
		horde[i].announce();
}
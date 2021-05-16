#include "ZombieEvent.hpp"
#include <ctime>
#include <stdlib.h>

Zombie::Zombie(std::string	name, std::string type): _name(name), _type(type)
{
	std::cout << "Poor " << this->_name << ", they just got bitten and now they're a Zombie!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "One shot to the head ends " << this->_name << "'s zombie life :(" << std::endl;
}

void	Zombie::announce() const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

void	randomChump()
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
	ZombieEvent	event;

	std::srand(std::time(0));
	event.setZombieType(types[std::rand() % nbtypes]);
	Zombie * newz = event.newZombie(names[std::rand() % nbnames]);
	newz->announce();
	delete newz;
}
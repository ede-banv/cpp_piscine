#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){}

ZombieEvent::~ZombieEvent(){}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie*	babyZombie = new Zombie(name, this->_type);
	return (babyZombie);
}
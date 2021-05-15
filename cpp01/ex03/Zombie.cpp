#include "ZombieHorde.hpp"

Zombie::Zombie()
{
	std::cout << "A poor soul just got bitten and now they're a zombie!" << std::endl;
}

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

void	Zombie::setZombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

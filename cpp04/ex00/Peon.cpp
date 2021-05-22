#include "Peon.hpp"

Peon::Peon():Victim(){}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon& copy) : Victim(copy)
{
	*this = copy;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." <<std::endl;
}

Peon&	Peon::operator=(const Peon& rhs)
{
	this->_name = rhs.getName();
	return *this;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pinky pony!" << std::endl;
}

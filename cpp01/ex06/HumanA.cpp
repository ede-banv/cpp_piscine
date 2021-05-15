#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& shadow) : _name(name), _shadow(shadow) {}

HumanA::~HumanA(){}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_shadow.getType() << std::endl;
}
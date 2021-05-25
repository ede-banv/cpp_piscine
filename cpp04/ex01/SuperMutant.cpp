#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Muatnt")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& copy) : Enemy(copy)
{
	*this = copy;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant&	SuperMutant::operator=(const SuperMutant& rhs)
{
	this->_hp = rhs.getHP();
	this->_type = rhs.getType();
	return *this;
}

void			SuperMutant::takeDamage(int n)
{
	if (n >= 0)
	{
		if (n - 3 <= this->_hp)
			this->_hp -= n - 3;
		else
			this->_hp = 0;
	}
}

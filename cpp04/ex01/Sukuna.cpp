#include "Sukuna.hpp"

Sukuna::Sukuna():Enemy(1000, "Sukuna, king of the cursed spirits")
{
	std::cout << "This will be fun.. " << std::endl;
}

Sukuna::Sukuna(const Sukuna& copy):Enemy(copy)
{
	*this = copy;
}

Sukuna::~Sukuna()
{
	std::cout << "We'll meet again." << std::endl;
}

Sukuna&	Sukuna::operator=(const Sukuna& rhs)
{
	this->_hp = rhs.getHP();
	this->_type = rhs.getType();
	return *this;
}

void	Sukuna::takeDamage(int n)
{
	if (n >= 0)
	{
		if (n - 25 <= this->_hp)
			this->_hp -= n >= 25 ? n - 25 : 0;
		else
			this->_hp = 0;
	}


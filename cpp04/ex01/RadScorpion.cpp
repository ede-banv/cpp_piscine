#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& copy): Enemy(copy)
{
	*this = copy;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&	RadScorpion::operator=(const RadScorpion& rhs)
{
	this->_hp = rhs.getHP();
	this->_type = rhs.getType();
	return *this;
}

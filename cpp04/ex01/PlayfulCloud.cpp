#include "PlayfulCloud.hpp"

PlayfulCloud::PlayfulCloud():AWeapon("Class S Cursed Tool Playful Cloud", 30, 100){}

PlayfulCloud::PlayfulCloud(const PlayfulCloud& copy):AWeapon(copy)
{
	*this = copy;
}

PlayfulCloud::~PlayfulCloud(){}

PlayfulCloud&	PlayfulCloud::operator=(const PlayfulCloud& rhs)
{
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return *this;
}

void			PlayfulCloud::attack() const
{
	std::cout << "* shlACK sBAM *" << std::endl;
}
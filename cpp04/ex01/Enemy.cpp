#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string& type): _hp(hp), _type(type){}

Enemy::Enemy(const Enemy& copy)
{
	*this = copy;
}

Enemy::~Enemy(){}

Enemy&		Enemy::operator=(const Enemy& rhs)
{
	this->_hp = rhs.getHP();
	this->_type = rhs.getType();
	return *this;
}

std::string	Enemy::getType() const
{
	return this->_type;
}

int			Enemy::getHP() const
{
	return this->_hp;
}

void		Enemy::takeDamage(int n)
{
	if (n >= 0)
		if (n <= this->_hp)
			this->_hp -= n;
}

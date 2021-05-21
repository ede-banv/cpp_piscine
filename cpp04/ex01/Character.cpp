#include "Character.hpp"

Character::Character(){}
Character::Character(const Character& copy)
{
	*this = copy;
}
Character::~Character(){}

Character&	Character::operator=(const Character& rhs){}

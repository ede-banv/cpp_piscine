#include "Human.hpp"

Human::Human() : brian(90, 100, "left") {}

Human::~Human() {}

void*			Human::identify() const
{
	return this->brian.identify();
}

const Brain&	Human::getBrain() const
{
	return this->brian;
}
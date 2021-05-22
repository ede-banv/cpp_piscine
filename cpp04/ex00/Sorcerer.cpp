#include "Sorcerer.hpp"

Sorcerer::Sorcerer(){}

Sorcerer::Sorcerer(std::string name, std::string title):
_name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& copy)
{
	*this = copy;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&	Sorcerer::operator=(const Sorcerer& rhs)
{
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();
	return *this;
}

std::string	Sorcerer::getName() const
{
	return this->_name;
}

std::string	Sorcerer::getTitle() const
{
	return this->_title;
}

void		Sorcerer::polymorph(const Victim& target) const
{
	target.getPolymorphed();
}

std::ostream&	operator<<(std::ostream& o, Sorcerer& rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}

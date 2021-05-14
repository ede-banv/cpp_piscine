#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string speed, std::string size):
_name(name), _color(color), _speed(speed), _size(size)
{
	std::cout << "Welcome to "<< this->_name << "!" << std::endl;
}

Pony::~Pony()
{
	std::cout << "So long " << this->_name << " keep being free..." << std::endl;
}

void	Pony::printAttributes() const
{
	std::cout << this->_name << "'s mane flows as his " << this->_size << " frame, " << this->_color << ", runs " << this->_speed << " through the field.\n";
}

void	ponyOnTheStack()
{
	Pony	michael("Michael", "white with brown spots", "very fast", "small");
	michael.printAttributes();
}

void	ponyOnTheHeap()
{
	Pony	*buttercup = new Pony("Buttercup", "deep brown", "steady", "huge");
	buttercup->printAttributes();
	delete buttercup;
}
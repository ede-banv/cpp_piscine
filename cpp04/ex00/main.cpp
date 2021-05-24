#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Student.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Student emma("Emma");
	std::cout << robert << jim << joe << emma;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(emma);
	return 0;
}
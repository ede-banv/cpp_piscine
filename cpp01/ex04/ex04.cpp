#include <iostream>

int main()
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	brainptr = &brain;
	std::string&	brainref = brain;

	std::cout << "Ptr: " << *brainptr << std::endl;
	std::cout << "Ref: " << brainref << std::endl;
	return (0);
}
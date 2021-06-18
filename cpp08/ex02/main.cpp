#include "MutantStack.hpp"

int		main(void)
{
	std::cout << "\n\e[1;35m* Tests for MutantStack *\e[0m\n";

	MutantStack<int>	newstack;

	newstack.push(42);
	newstack.push(12);
	newstack.push(56);
	newstack.push(5);
	newstack.push(420);
	newstack.push(1611);

	MutantStack<int>::iterator	it = newstack.begin();
	MutantStack<int>::iterator	ite = newstack.end();

	std::cout << "\nWhat MutantStack Contains:\n";
	while (it != ite)
	{
		std::cout << "[" << *it << "]\n";
		++it;
	}
}
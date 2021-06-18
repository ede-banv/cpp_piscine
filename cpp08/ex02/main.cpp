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


	std::cout << "Size: " << newstack.size() << std::endl;
	std::cout << "Last element added: " << newstack.top() << std::endl;
	newstack.pop();
	std::cout << "New size: " << newstack.size() << std::endl;

	MutantStack<int>::iterator	it = newstack.begin();
	MutantStack<int>::iterator	ite = newstack.end();

	++it;
	--it;

	std::cout << "\nWhat MutantStack Contains:\n";
	while (it != ite)
	{
		std::cout << "[" << *it << "]\n";
		++it;
	}

	MutantStack<int>	copystack(newstack);

	it = copystack.begin();
	ite = copystack.end();

	std::cout << "\nCopy of MutantStack:\n";
	while (it != ite)
	{
		std::cout << "[" << *it << "]\n";
		++it;
	}
}
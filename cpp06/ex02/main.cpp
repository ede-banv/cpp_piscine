#include <iostream>
#include <ctime>
#include <string.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate()
{
	static int d = 0;
	if (d == 0)
	{
		std::srand(std::time(0));
		d++;
	}

	int random = std::rand() % 3;
	switch(random){
		case 0:
			std::cout << "Real type: A\n";
			return new A();
		case 1:
			std::cout << "Real type: B\n";
			return new B();
		case 2:
			std::cout << "Real type: C\n";
			return new C();
	}
	return NULL;
}

void	identify_from_pointer(Base* p)
{
	if(A* a = dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if(B* b = dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if(C* c = dynamic_cast<C*>(p))
		std::cout << "C\n";
}

void	identify_from_reference(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A\n";
		return;
	}
	catch(const std::exception& e){}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B\n";
		return;
	}
	catch(const std::exception& e){}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C\n";
		return;
	}
	catch(const std::exception& e){}
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		Base*	base = generate();
		std::cout << "Identified by pointer: ";
		identify_from_pointer(base);
		std::cout << "Identified by reference: ";
		identify_from_reference(*base);
		std::cout << std::endl;
		delete base;
	}
	return (0);
}
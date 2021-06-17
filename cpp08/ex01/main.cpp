#include <iostream>
#include "Span.hpp"

int main()
{
	{
		std::cout << "\n\e[1;35m* Subject tests *\e[0m\n";
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "\n\e[1;35m* Creating and empty list *\e[0m\n";
		Span sp(0);

		try
		{
			sp.addNumber(4);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\e[1;35m* Testing exceptions *\e[0m\n";
		Span sp(10);
		Span spcopy(sp);

		spcopy.addNumber(4);
		try
		{
			spcopy.shortestSpan();
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	return (0);
}
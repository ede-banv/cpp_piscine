#include "Span.hpp"

int main()
{
	{
		std::cout << "\n\e[1;35m* Subject tests *\e[0m\n";
		Span	sp = Span(5);

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
		Span	sp(0);

		try
		{
			sp.addNumber(4);
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[1;30mException: \e[0m" << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\e[1;35m* Testing exceptions *\e[0m\n";
		Span	sp(10);
		Span	spcopy(sp);

		spcopy.addNumber(4);
		try
		{
			spcopy.shortestSpan();
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[1;30mException: \e[0m" << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\e[1;35m* Testing with 10000 numbers *\e[0m\n";
		Span			big(10000);
		std::list<int>	rnge;

		for (int i = 0; i < 2000; ++i)
		{
			rnge.push_back(i);
			rnge.push_back(i + 5000);
			rnge.push_back(i + 10000);
			rnge.push_back(i + 20000);
			rnge.push_back(i + 50000);
		}
		big.addRange(rnge.begin(), rnge.end());

		std::cout << "Shortest span: " << big.shortestSpan() << std::endl;
		std::cout << "Longest span: " << big.longestSpan() << std::endl;

		std::cout << "\nTry adding too much with addRange:\n";
		try
		{
			big.addRange(rnge.begin(), rnge.end());
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[1;30mException: \e[0m" << e.what() << '\n';
		}

		std::cout << "\nTry adding 10001st element:\n";
		try
		{
			big.addNumber(1);
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[1;30mException: \e[0m" << e.what() << '\n';
		}
	}
	return (0);
}
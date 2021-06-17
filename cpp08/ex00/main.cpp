#include <list>
#include <vector>
#include <deque>
#include "easyfind.hpp"

template<typename T>
void	try_catch(const T& collec, int n)
{
	try
	{
		typename T::const_iterator res = easyfind(collec, n);
		std::cout << *res << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "No instance found xdxdxd.\n";
	}

}

int main()
{
	{
		std::cout << "\n\e[1;35mTests w lists\e[0m\n";
		std::list<int>	intlist;

		intlist.push_back(4);
		intlist.push_back(6);
		intlist.push_back(3);
		intlist.push_back(4);
		intlist.push_back(7);

		try_catch(intlist, 4);
		try_catch(intlist, 7);
		try_catch(intlist, 9);
	}
	{
		std::cout << "\n\e[1;35mTests w vectors\e[0m\n";
		std::vector<int>	veclist;

		veclist.push_back(4);
		veclist.push_back(6);
		veclist.push_back(3);
		veclist.push_back(4);
		veclist.push_back(7);

		try_catch(veclist, 4);
		try_catch(veclist, 8);
		try_catch(veclist, 9);
	}
	{
		std::cout << "\n\e[1;35mTests w deque\e[0m\n";
		std::deque<int>	delist;

		delist.push_back(4);
		delist.push_back(6);
		delist.push_back(3);
		delist.push_back(1);
		delist.push_back(4);
		delist.push_back(7);

		try_catch(delist, 4);
		try_catch(delist, 1);
		try_catch(delist, 8);
		try_catch(delist, 9);
	}
	return (0);
}
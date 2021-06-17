#include <iostream>

template<typename T>
T	easyfind(const T& cont, int n)
{
	T	first = std::find(cont.begin(), cont.end(), n);
	if (first == cont.end())
	{
		std::cout << "No occurence found.\n";
		throw std::exception();
	}
	return	first;
}
#include <iostream>

template<typename T>
typename T::const_iterator	easyfind(const T& cont, int n)
{
	typename T::const_iterator	first = std::find(cont.begin(), cont.end(), n);
	if (first == cont.end())
		throw std::exception();
	return	first;
}
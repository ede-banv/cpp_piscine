#include <iostream>
#include "iter.hpp"

template<typename T>
void	show_elem(T a)
{
	std::cout << a << std::endl;
}

int		main()
{
	std::string	ptr = "string";
	int			ints[4] = {1, 2, 3, 4};
	std::string	array[4] = {"one", "two", "three"};

	iter(ptr.c_str(), 6, &show_elem);
	std::cout << std::endl;
	iter(ints, 4, &show_elem);
	std::cout << std::endl;
	iter(array, 4, &show_elem);
	return (0);
}
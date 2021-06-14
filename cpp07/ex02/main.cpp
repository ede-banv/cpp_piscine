#include "Array.hpp"

int main()
{
	Array<int>			emptyarr;
	Array<int>			intarray(10);
	Array<std::string>	strarray(4);
	std::string			array[4] = {"one", "two", "three", "four"};

	std::cout << "Empty array: " << emptyarr.size() << "\n\n";

	std::cout << "Int array: " << std::endl;
	for (int i = 0; i < intarray.size(); i++)
		intarray[i] = i;
	for (int i = 0; i < intarray.size(); i++)
		std::cout << intarray[i] << std::endl;

	std::cout << std::endl;

	std::cout << "String copy array: " << std::endl;
	for (int i = 0; i < strarray.size(); i++)
		strarray[i] = array[i];

	Array<std::string>	copyarray(strarray);
	for (int i = 0; i < copyarray.size(); i++)
		std::cout << copyarray[i] << std::endl;
	return (0);
}
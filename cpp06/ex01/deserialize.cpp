#include "Serialization.hpp"

Data*	deserialize(void*	ptr)
{
	char*		cstr = reinterpret_cast<char*>(ptr);

	std::string	ptr1 = "";
	ptr1.assign(cstr, 10);
	int			num = *(reinterpret_cast<int*>(&cstr[10]));
	std::string	ptr2 = "";
	ptr2.assign(&cstr[14], 10);
	return new Data(ptr1, num, ptr2);
}
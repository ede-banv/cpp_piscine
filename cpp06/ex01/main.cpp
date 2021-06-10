#include "Serialization.hpp"

int main()
{
	void*	ser = serialize();
	std::cout << reinterpret_cast<char*>(ser) << std::endl;
	Data*	data = deserialize(ser);
	std::cout << *data;
	delete data;
	delete ser;
	return (0);
}
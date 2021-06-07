#include "Serialization.hpp"

void*	serialize()
{
	std::string	alphanum = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char*		res = new char[sizeof(char) * 20 + sizeof(int)];

	srand(std::time(NULL));
	for (int i = 0; i < 10; i++)
		res[i] = alphanum[rand() % alphanum.length()];
	for (int i = 10; i < 14; i++)
		res[i] = rand() % 255;
	for (int i = 14; i < 24; i++)
		res[i] = alphanum[rand() % alphanum.length()];
	return res;
}
#include <iostream>

void megaphone(int max, char **string)
{
	for (int j = 1; j < max; j++)
		for (size_t i = 0; i < strlen(string[j]) ; i++)
			std::cout << (char)toupper(string[j][i]);
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		megaphone(argc, argv);
}

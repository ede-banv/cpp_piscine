#include <iostream>
#include "annuaire.hpp"

int		main()
{
	int			add = 0;
	int			index;
	std::string input;
	Annuaire 	book[8];

	bzero(&book, sizeof(Annuaire) * 8);
	std::cout << "Welcome to your phone book <3\n" << std::endl;
	while (1)
	{
		input = "";
		std::cout << "You can ADD a new contact, SEARCH your phonebook or EXIT ;)" << std::endl;
		std::cout << "What would you like to do?  ";
		if ((std::cin >> input).eof())
			break ;
		else if (input == "ADD")
		{
			if (add > 7)
				std::cout << "Your contact list is full :/\n";
			else if (!book[add++].createContact())
			{
				add--;
				std::cout << "Failed creating contact" << std::endl;
			}
		}
		else if (input == "SEARCH")
		{
			if (add == 0)
				std::cout << "Your phone book is empty, loser" << std::endl;
			else
			{
				index = 0;
				for (int i = 0; i < add; i++)
				{
					std::cout << i + 1 << "|";
					book[i].getSearch();
				}
				std::cout << "Which contact would u like to see? ";
				std::cin >> index;
				if (!std::cin.fail() && index >= 1 && index <= 8)
					book[index - 1].getContact();
				else
					std::cout << "Incorrect index >:(";
			}
		}
		else if (input == "EXIT")
			break;
		else
			std::cout << "Incorrect command >:(";
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "See you soon babe ;)" << std::endl;
	return (0);
}

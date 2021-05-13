#include <iostream>
#include "annuaire.hpp"

int		main()
{
	int			add = 0;
	int			index;
	std::string input;
	Annuaire 	book[8];

	bzero(&book, sizeof(Annuaire) * 8);
	std::cout << "\n\e[1;36m * Welcome to your phone book <3 *\e[0m\n" << std::endl;
	while (1)
	{
		input = "";
		std::cout << "You can \e[36mADD\e[0m a new contact, \e[36mSEARCH\e[0m your phonebook or \e[36mEXIT\e[0m ;)" << std::endl;
		std::cout << "What would you like to do?  ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		else if (input == "ADD")
		{
			if (add > 7)
				std::cout << "\e[31mYour contact list is full :/\e[0m\n\n";
			else if (!book[add++].createContact())
			{
				add--;
				std::cout << "\e[31mFailed creating contact\e[0m\n" << std::endl;
			}
		}
		else if (input == "SEARCH")
		{
			if (add == 0)
				std::cout << "\e[31mYour phone book is empty, loser\e[0m\n" << std::endl;
			else
			{
				index = 0;
				std::cout << "\n     Index|First Name| Last Name|  Nickname\n";
				std::cout << "---------------------------------------------\n";
				for (int i = 0; i < add; i++)
				{
					std::cout << "         " << i + 1 << "|";
					book[i].getSearch();
				}
				std::cout << "\nWhich contact would u like to see? ";
				std::getline(std::cin, input);
				index = input != "" ? std::atoi(input.c_str()) : -1;
				if (!std::cin.fail() && index >= 1 && index <= 8 && index <= add)
					book[index - 1].getContact();
				else
					std::cout << "\e[31mIncorrect index >:(\e[0m\n\n";
			}
		}
		else if (input == "EXIT")
			break;
		else
			std::cout << "\e[31mIncorrect command >:(\e[0m\n";
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\e[1;36mSee you soon babe ;)\e[0m\n" << std::endl;
	return (0);
}

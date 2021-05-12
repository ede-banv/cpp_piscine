#include <iostream>
#include "annuaire.hpp"

Annuaire::Annuaire(char *fname, char *lname, char* nickname, char *login, char *padress, char *email, int number[10], int bday[3][2], char *fav_meal, char* underwear, char* secret) :
fname(fname), lname(lname), nickname(nickname), login(login), padress(padress), email(email), number(number), bday(bday), fav_meal(fav_meal), underwear(underwear), secret(secret)
{
	std::cout << "Contact added successfully!" <<std::endl;
}

Annuaire::~Annuaire()
{
	std::cout << "Contact deleted :(" << std::endl;
}

void	troncate(const char *str)
{
	if (strlen(str) > 10)
	{
		for (int i = 0; i < 9; i++)
		{
			if ((*str) != '\0')
			{
				putchar(*str);
				str++;
			}
		}
		std::cout << ".";
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if ((*str) != '\0')
			{
				putchar(*str);
				str++;
			}
			else
				std::cout << " ";
		}
	}
}

void	Annuaire::getSearch() const
{
	troncate(self->fname);
	std::cout << "|";
	troncate(self->lname);
	std::cout << "|";
	troncate(self->nickname);
	std::cout << std::endl;
}

void Annuaire::getContact() const
{
	std::cout << "Name: " << self->fname << std::endl;
	std::cout << "Last name: " << self->lname << std::endl;
	std::cout << "Nickname: " << self->nickname << std::endl;
	std::cout << "Login: " << self->login << std::endl;
	std::cout << "Adress: " << self->padress << std::endl;
	std::cout << "Email: " << self->email << std::endl;
	std::cout << "Phone number: " << self->number << std::endl;
	std::cout << "Birthday: " << self->bday[0] << "/" << self->bday[1] << "/" << self->day[2] << std::endl;
	std::cout << "Favorite meal: " << self->fav_meal << std::endl;
	std::cout << "Underwear color: " << self->underwear << std::endl;
	std::cout << "Darkest Secret: " << self->secret << std::endl;
}
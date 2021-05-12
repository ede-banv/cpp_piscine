#include <iomanip>
#include "annuaire.hpp"

Annuaire::Annuaire() {}
Annuaire::~Annuaire() {
	std::cout << "Name: " << this->lname << std::endl;}

static int	get_line(std::string attr, std::string *str)
{
	std::cout << "Enter their " << attr << ": ";
	std::cin.ignore();
	std::getline(std::cin, *str);
	std::cout << "\n\n" << *str << "\n\n";
	if (*str == "")
	{
		std::cout << "YOU CAN'T LEAVE THE FIELD EMPTY, MAN" << std::endl;
		return (0);
	}
	return (1);
}

int	Annuaire::createContact()
{
	std::cout << "Please enter your contact's info!" << std::endl;
	if (!get_line("first name", &this->fname))
		return (0);
	if (!get_line("last name", &this->lname))
		return (0);
	if (!get_line("nickname", &this->nickname))
		return (0);
	if (!get_line("42 login", &this->login))
		return (0);
	if (!get_line("address", &this->paddress))
		return (0);
	if (!get_line("email address", &this->email))
		return (0);
	if (!get_line("phone number", &this->number))
		return (0);
	if (!get_line("birthday:", &this->bday))
		return (0);
	if (!get_line("favorite meal", &this->fav_meal))
		return (0);
	if (!get_line("underwear color", &this->underwear))
		return (0);
	if (!get_line("darkest secret", &this->secret))
		return (0);
	std::cout << "Contact added successfully!" << std::endl;
	return (1);
}

void	cut_string(std::string str)
{
	if (str.length() > 10)
	{
		str.substr(0,9);
		str.append(".");
	}
	else
		std::cout << std::setfill(' ') << std::setw(10);
	std::cout << str;

}

void	Annuaire::getSearch() const
{
	cut_string(this->fname);
	std::cout << "|";
	cut_string(this->lname);
	std::cout << "|";
	cut_string(this->nickname);
	std::cout << std::endl;
}

void Annuaire::getContact() const
{
	std::cout << "Name: " << this->fname << std::endl;
	std::cout << "Last name: " << this->lname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Address: " << this->paddress << std::endl;
	std::cout << "Email: " << this->email << std::endl;
	std::cout << "Phone number: " << this->number << std::endl;
	std::cout << "Birthday: " << this->bday << std::endl;
	std::cout << "Favorite meal: " << this->fav_meal << std::endl;
	std::cout << "Underwear color: " << this->underwear << std::endl;
	std::cout << "Darkest Secret: " << this->secret << std::endl;
}
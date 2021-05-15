#include <iomanip>
#include "annuaire.hpp"

Annuaire::Annuaire():
_fname(""), _lname(""), _nickname(""), _login(""), _paddress(""), _email(""), _number(""), _bday(""), _fav_meal(""), _underwear(""), _secret("") {}
Annuaire::~Annuaire() {}

static int	get_line(std::string attr, std::string *str)
{
	std::cout << "Enter their " << attr << ": ";
	std::getline(std::cin, *str);
	if (*str == "")
	{
		std::cout << "\e[1;31mYOU CAN'T LEAVE THE FIELD EMPTY, MAN\e[0m" << std::endl;
		return (0);
	}
	return (1);
}

int	Annuaire::createContact()
{
	std::cout << "\nPlease enter your contact's info!\n" << std::endl;
	if (!get_line("first name", &this->_fname))
		return (0);
	if (!get_line("last name", &this->_lname))
		return (0);
	if (!get_line("nickname", &this->_nickname))
		return (0);
	if (!get_line("42 login", &this->_login))
		return (0);
	if (!get_line("address", &this->_paddress))
		return (0);
	if (!get_line("email address", &this->_email))
		return (0);
	if (!get_line("phone number", &this->_number))
		return (0);
	if (!get_line("birthday", &this->_bday))
		return (0);
	if (!get_line("favorite meal", &this->_fav_meal))
		return (0);
	if (!get_line("underwear color", &this->_underwear))
		return (0);
	if (!get_line("darkest secret", &this->_secret))
		return (0);
	std::cout << "\n\e[32mContact added successfully!\e[0m" << std::endl;
	return (1);
}

void	cut_string(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	else
		std::cout << std::setfill(' ') << std::setw(10);
	std::cout << str;

}

void	Annuaire::getSearch() const
{
	cut_string(this->_fname);
	std::cout << "|";
	cut_string(this->_lname);
	std::cout << "|";
	cut_string(this->_nickname);
	std::cout << std::endl;
}

void Annuaire::getContact() const
{
	std::cout << "\nName: " << this->_fname << std::endl;
	std::cout << "Last name: " << this->_lname << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Address: " << this->_paddress << std::endl;
	std::cout << "Email: " << this->_email << std::endl;
	std::cout << "Phone number: " << this->_number << std::endl;
	std::cout << "Birthday: " << this->_bday << std::endl;
	std::cout << "Favorite meal: " << this->_fav_meal << std::endl;
	std::cout << "Underwear color: " << this->_underwear << std::endl;
	std::cout << "Darkest Secret: " << this->_secret << std::endl;
}
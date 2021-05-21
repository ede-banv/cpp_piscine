#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, "NINJ4-TP")
{
	std::cout << "Booting sequence complete. Hello! I am your new NINJ4-TP assault bot.\n" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, name, "NINJ4-TP")
{
	std::cout << "Booting sequence complete. Hello! I am your new NINJ4-TP assault bot. Designation: " << this->name << ".\n\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap& copy): ClapTrap(copy)
{
	*this = copy;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "\e[1;33m<NINJ4-TP " << this->name << ">\e[0m No, nononono NO!		*dies*\n" << std::endl;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& rhs)
{
	this->hp = rhs.hp;
	this->max_hp = rhs.max_hp;
	this->ep = rhs.ep;
	this->max_ep = rhs.max_ep;
	this->lvl = rhs.lvl;
	this->ranged_dmg = rhs.ranged_dmg;
	this->melee_dmg = rhs.melee_dmg;
	this->armor = rhs.armor;
	this->name = rhs.name;
	this->_bot_type = rhs._bot_type;
	return *this;
}

void		NinjaTrap::ninjaShoebox(const	NinjaTrap& target)
{
	if (this->ep - 25 < 0)
		std::cout << "\e[1;33m<NINJ4-TP " << this->name << ">\e[0m Dangit, I'm out of energy!\n" << std::endl;
	else
	{
		this->ep -= 25;
		std::cout << "A table set up for a high tea falls from the sky without as much as dropping a finger sandwich and NINJ4-TP " << this->name <<
		" invites " << target.name << " to sit." << std::endl;
		std::cout << "\e[1;33m<NINJ4-TP " << this->name << ">\e[0m Care for some tea?" << std::endl;
		std::cout << "\e[1;33m<NINJ4-TP " << target.name << ">\e[0m Absolutely, pass the sugar?\n" << std::endl;
	}
}

void		NinjaTrap::ninjaShoebox(const	ScavTrap& target)
{
	if (this->ep - 25 < 0)
		std::cout << "\e[1;33m<NINJ4-TP " << this->name << ">\e[0m Dangit, I'm out of energy!\n" << std::endl;
	else
	{
		this->ep -= 25;
		std::cout << "NINJ4-TP " << this->name << " throws a controller at " << target.name << " who catches it as a screen appears with Mario Kart on it." << std::endl;
		std::cout << "\e[1;33m<NINJ4-TP " << this->name << ">\e[0m I'm playing Toad, get ready to bite dust, loser!" << std::endl;
		std::cout << "\e[1;33m<SC4V-TP " << target.name << ">\e[0m We'll see about that!\n" << std::endl;
	}
}

void		NinjaTrap::ninjaShoebox(const	FragTrap& target)
{
	if (this->ep - 25 < 0)
		std::cout << "\e[1;33m<NINJ4-TP " << this->name << ">\e[0m Dangit, I'm out of energy!\n" << std::endl;
	else
	{
		std::cout << "NINJ4-TP " << this->name << " launches at " << target.name << ", pillow in hand, challenging them to a pillow fight." << std::endl;
		this->ep -= 25;
		std::cout << "\e[1;33m<NINJ4-TP " << this->name << ">\e[0m What do you want to do next? Paint our nails?" << std::endl;
		std::cout << "\e[1;33m<FR4G-TP " << target.name << ">\e[0m Ohhh, let's do face masks too!\n" << std::endl;
	}
}

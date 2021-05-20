#include <ctime>
#include <stdlib.h>
#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, "FR4G-TP")
{
	std::cout << "Booting sequence complete. Hello! I am your new FR4G-TP assault bot.\n" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, name, "FR4G-TP")
{
	std::cout << "Booting sequence complete. Hello! I am your new FR4G-TP assault bot. Designation: " << this->name << ".\n\n";
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy)
{
	*this = copy;
}
FragTrap::~FragTrap()
{
	std::cout << "\e[1;33m<FR4G-TP " << this->name << ">\e[0m I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\n" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
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
	return *this;
}

void		FragTrap::vaulthunter_dot_exe(const std::string& target)
{
	static	bool	random = false;
	std::string	launch_quotes[] = {"Recompiling my combat code!", "It's happening... it's happening!",
	"Resequencing combat protocols!", "Resequencing combat protocols!", "Loading combat packages!",
	"F to the R to the 4 to the G to the WHAAT!"}; //6
	std::string	attack_quotes[] = {"Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!",
	"Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!", "Kill, reload! Kill, reload! KILL! RELOAD!",
	"Kill, reload! Kill, reload! KILL! RELOAD!", "Oh god I can't stop!"}; //5
	std::string	attacks[] = {" sends a dozen missiles flying everywhere, the more the merrier, as they say.", "'s eyes shoot blazing lazer beams, the place lights up like a disco!",
	" glowing with obscure energy, FR4G-TP performs a pefect Black Ray and it's EXTRA EFFECTIVE!", " gets out a katana... Where was it hiding that? Nevermind, RUN!",
	" takes out an umbrella... Weird it's not raining? WAIT NO IT'S A GUN!"}; //5
	if (!random)
	{
		std::srand(std::time(0));
		random = true;
	}
	(void)target;
	if (this->ep - 25 < 0)
		std::cout << "\e[1;33m<FR4G-TP " << this->name << ">\e[0m Coming up empty!\n" << std::endl;
	else
	{
		this->ep -= 25;
		std::cout << "\e[1;33m<FR4G-TP " << this->name << ">\e[0m " << launch_quotes[std::rand() % 6] << std::endl;
		std::cout << "FR4G-TP " << this->name << attacks[std::rand() % 5] << std::endl;
		std::cout << "\e[1;33m<FR4G-TP " << this->name << ">\e[0m " << attack_quotes[std::rand() % 5] << std::endl << std::endl;
	}

}

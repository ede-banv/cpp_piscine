#include <ctime>
#include <stdlib.h>
#include "FragTrap.hpp"

FragTrap::FragTrap():
_hp(100), _max_hp(100), _ep(100), _max_ep(100), _lvl(1), _melee_dmg(30), _ranged_dmg(20), _armor(5)
{
	std::cout << "Booting sequence complete. Hello! I am your new FR4G-TP assault bot.\n" << std::endl;
}

FragTrap::FragTrap(std::string name):
_hp(100), _max_hp(100), _ep(100), _max_ep(100), _lvl(1), _melee_dmg(30), _ranged_dmg(20), _armor(5), _name(name)
{
	std::cout << "Booting sequence complete. Hello! I am your new FR4G-TP assault bot. Designation: " << this->_name << ".\n\n";
}

FragTrap::FragTrap(const FragTrap& copy)
{
	*this = copy;
}
FragTrap::~FragTrap()
{
	std::cout << "\e[1;33m<FR4G-TP " << this->_name << ">\e[0m I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\n" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	this->_hp = rhs._hp;
	this->_max_hp = rhs._max_hp;
	this->_ep = rhs._ep;
	this->_max_ep = rhs._max_ep;
	this->_lvl = rhs._lvl;
	this->_ranged_dmg = rhs._ranged_dmg;
	this->_melee_dmg = rhs._melee_dmg;
	this->_armor = rhs._armor;
	this->_name = rhs._name;
	return *this;
}

void		FragTrap::rangedAttack(const std::string& target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_dmg << " points of damage!" << std::endl;
	std::cout << "\e[1;33m<FR4G-TP " << this->_name << ">\e[0m Bad guy go boom!\n" << std::endl;
}

void		FragTrap::meleeAttack(const std::string& target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " in close combat, causing " << this->_melee_dmg << " points of damage!" << std::endl;
	std::cout << "\e[1;33m<FR4G-TP " << this->_name << ">\e[0m Heyyah!\n" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->_name << " takes a hard blow that causes it to lose " << amount - (unsigned)this->_armor << " hp!" << std::endl;
	if (amount - (unsigned)this->_armor < (unsigned)this->_hp)
		this->_hp -= amount - this->_armor;
	else
		this->_hp = 0;
	std::cout << "\e[1;33m<FR4G-TP " << this->_name << ">\e[0m My robotic flesh! AAHH!\n" << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->_name << " goes back to the mechanical shop " << amount - (unsigned)this->_armor << " hp back!" << std::endl;
	if (amount < (unsigned)this->_max_hp - (unsigned)this->_hp)
	{
		this->_hp += amount;
		std::cout << "\e[1;33m<FR4G-TP " << this->_name << ">\e[0m Back for more!\n" << std::endl;
	}
	else
	{
		this->_hp = this->_max_hp;
		std::cout << "\e[1;33m<FR4G-TP " << this->_name << ">\e[0m Like new, let's get'em!\n" << std::endl;
	}
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
	if (this->_ep - 25 < 0)
		std::cout << "\e[1;33m<FR4G-TP " << this->_name << ">\e[0m Coming up empty!" << std::endl;
	else
	{
		this->_ep -= 25;
		std::cout << "\e[1;33m<FR4G-TP " << this->_name << ">\e[0m " << launch_quotes[std::rand() % 6] << std::endl;
		std::cout << "FR4G-TP " << this->_name << attacks[std::rand() % 5] << std::endl;
		std::cout << "\e[1;33m<FR4G-TP " << this->_name << ">\e[0m " << attack_quotes[std::rand() % 5] << std::endl << std::endl;
	}

}

#ifndef __CLAPTRAP__
# define __CLAPTRAP__

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(int hp, int max_hp, int ep, int max_ep, int lvl, int melee_dmg, int ranged_dmg, int armor, std::string bot_type);
		ClapTrap(int hp, int max_hp, int ep, int max_ep, int lvl, int melee_dmg, int ranged_dmg, int armor, std::string name, std::string bot_type);
		ClapTrap(const ClapTrap& copy);
		~ClapTrap();

		ClapTrap&	operator=(const ClapTrap& rhs);
		void		rangedAttack(const std::string& target);
		void		meleeAttack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		int			hp;
		int			max_hp;
		int			ep;
		int			max_ep;
		int			lvl;
		int			melee_dmg;
		int			ranged_dmg;
		int			armor;
		std::string	name;
	protected:
		std::string	_bot_type;
};

#endif

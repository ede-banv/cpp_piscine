#ifndef __SCAVTRAP__
# define __SCAVTRAP__

# include <iostream>

class ScavTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& copy);
		~ScavTrap();

		ScavTrap&	operator=(const ScavTrap& rhs);
		void		rangedAttack(const std::string& target);
		void		meleeAttack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(const std::string& target);

		int			_hp;
		int			_max_hp;
		int			_ep;
		int			_max_ep;
		int			_lvl;
		int			_melee_dmg;
		int			_ranged_dmg;
		int			_armor;
		std::string	_name;
};

#endif

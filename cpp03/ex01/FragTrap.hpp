#ifndef __FRAGTRAP__
# define __FRAGTRAP__

# include <iostream>

class FragTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& rhs);
		void		rangedAttack(const std::string& target);
		void		meleeAttack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(const std::string& target);

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

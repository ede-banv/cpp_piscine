#ifndef __SCAVTRAP__
# define __SCAVTRAP__

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& copy);
		~ScavTrap();

		ScavTrap&	operator=(const ScavTrap& rhs);
		void		challengeNewcomer(const std::string& target);
};

#endif

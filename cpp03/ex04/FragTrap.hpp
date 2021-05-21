#ifndef __FRAGTRAP__
# define __FRAGTRAP__

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& rhs);
		void		vaulthunter_dot_exe(const std::string& target);
};

#endif

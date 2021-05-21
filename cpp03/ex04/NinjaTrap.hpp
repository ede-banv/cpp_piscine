#ifndef __NINJATRAP__
# define __NINJATRAP__

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(const std::string name);
		NinjaTrap(const NinjaTrap& copy);
		~NinjaTrap();

		NinjaTrap&	operator=(const NinjaTrap& rhs);
		void		ninjaShoebox(const	NinjaTrap& target);
		void		ninjaShoebox(const	ScavTrap& target);
		void		ninjaShoebox(const	FragTrap& target);
};

#endif

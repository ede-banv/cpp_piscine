#ifndef __SUPERTRAP__
# define __SUPERTRAP__

#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap& copy);
		~SuperTrap();

		SuperTrap&	operator=(const SuperTrap& rhs);
};

#endif

#ifndef __SUPERMUTANT__
# define __SUPERMUTANT__

# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant& copy);
		virtual ~SuperMutant();

		SuperMutant&	operator=(const SuperMutant& rhs);
		void			takeDamage(int n);
};

#endif

#ifndef __POWERFIST__
# define __POWERFIST__

# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
		PowerFist();
		PowerFist(const PowerFist& copy);
		~PowerFist();

		PowerFist&	operator=(const PowerFist& rhs);
		void		attack() const;
};

#endif

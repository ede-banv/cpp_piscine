#ifndef __PLASMARIFLE__
# define __PLASMARIFLE__

# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle& copy);
		~PlasmaRifle();

		PlasmaRifle&	operator=(const PlasmaRifle& rhs);
		void			attack() const;
};

#endif

#ifndef __PLAYFULCLOUD__
# define __PLAYFULCLOUD__

# include "AWeapon.hpp"

class PlayfulCloud: public AWeapon
{
	public:
		PlayfulCloud();
		PlayfulCloud(const PlayfulCloud& copy);
		virtual ~PlayfulCloud();

		PlayfulCloud&	operator=(const PlayfulCloud& rhs);
		void			attack() const;
};

#endif

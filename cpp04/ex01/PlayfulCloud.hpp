#ifndef __PLAYFULCLOUD__
# define __PLAYFULCLOUD__

# include "AWeapon.hpp"

class PlayfulCloud: public AWeapon
{
	public:
		PlayfulCloud();
		PlayfulCloud(const PlayfulCloud& copy);
		~PlayfulCloud();

		PlayfulCloud&	operator=(const PlayfulCloud& rhs);
		void			attack() const;
};

#endif

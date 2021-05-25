#ifndef __RADSCORPION__
# define __RADSCORPION__

# include "Enemy.hpp"

class RadScorpion: public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion& copy);
		virtual ~RadScorpion();

		RadScorpion&	operator=(const RadScorpion& rhs);
};

#endif

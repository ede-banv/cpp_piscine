#ifndef __SUKUNA__
# define __SUKUNA__

# include "Enemy.hpp"

class Sukuna: public Enemy
{
	public:
		Sukuna();
		Sukuna(const Sukuna& copy);
		~Sukuna();

		Sukuna&	operator=(const Sukuna& rhs);
		void	takeDamage(int n);
};

#endif

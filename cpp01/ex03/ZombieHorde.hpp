#ifndef __ZOMBIE_HORDE__
# define __ZOMBIE_HORDE__

# include "Zombie.hpp"

class	ZombieHorde
{
	public:
		ZombieHorde(int n);
		~ZombieHorde();

		void	announce() const;
	private:
		Zombie*	horde;
		int		_n;
};

#endif
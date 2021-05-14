#ifndef __ZOMBIE_EVENT__
# define __ZOMBIE_EVENT__

# include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();

		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);

	private:
		std::string	_type;
};

#endif
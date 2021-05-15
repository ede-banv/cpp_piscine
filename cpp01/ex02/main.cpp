#include "ZombieEvent.hpp"

int		main()
{
	Zombie		robert("Robert", "straight");
	robert.announce();

	ZombieEvent	event;
	event.setZombieType("flamboyant");
	Zombie*		titus = event.newZombie("Titus");
	titus->announce();

	randomChump();

	delete titus;
	return (0);
}
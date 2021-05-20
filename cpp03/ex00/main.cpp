#include "FragTrap.hpp"

int	main()
{
	FragTrap	marc("Marc");
	FragTrap	emma("Emma");

	marc.rangedAttack("Emma");
	emma.takeDamage(20);
	emma.rangedAttack("Marc");
	marc.takeDamage(20);
	emma.meleeAttack("Marc");
	marc.takeDamage(30);
	emma.beRepaired(50);
	emma.vaulthunter_dot_exe("Marc");
	emma.vaulthunter_dot_exe("Marc");
	emma.vaulthunter_dot_exe("Marc");
	emma.vaulthunter_dot_exe("Marc");
	emma.vaulthunter_dot_exe("Marc");

	return(0);
}
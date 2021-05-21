#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	{
	std::cout <<"\n\e[1;36m -- FragTrap Test --\e[0m\n" << std::endl;
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
	}
	{
	std::cout <<"\n\e[1;36m -- ScavTrap Test --\e[0m\n" << std::endl;
	ScavTrap	jeje("Jehanne");
	ScavTrap	jojo("Joscleyn");

	jeje.rangedAttack("Joscelyn");
	jojo.takeDamage(15);
	jojo.rangedAttack("Jehanne");
	jeje.takeDamage(15);
	jojo.meleeAttack("Jehanne");
	jeje.takeDamage(20);
	jojo.beRepaired(50);
	jojo.challengeNewcomer("Jehanne");
	jojo.challengeNewcomer("Jehanne");
	jojo.challengeNewcomer("Jehanne");
	}
	return(0);
}
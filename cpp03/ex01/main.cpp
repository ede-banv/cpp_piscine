#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	{
	FragTrap	marc("Marc");
	FragTrap	emma("Emma");

	std::cout << std::endl;
	marc.rangedAttack("Emma");
	std::cout << std::endl;
	emma.takeDamage(20);
	std::cout << std::endl;
	emma.rangedAttack("Marc");
	std::cout << std::endl;
	marc.takeDamage(20);
	std::cout << std::endl;
	emma.meleeAttack("Marc");
	std::cout << std::endl;
	marc.takeDamage(30);
	std::cout << std::endl;
	emma.beRepaired(50);
	std::cout << std::endl;
	emma.vaulthunter_dot_exe("Marc");
	std::cout << std::endl;
	emma.vaulthunter_dot_exe("Marc");
	std::cout << std::endl;
	emma.vaulthunter_dot_exe("Marc");
	std::cout << std::endl;
	emma.vaulthunter_dot_exe("Marc");
	std::cout << std::endl;
	emma.vaulthunter_dot_exe("Marc");
	}
	{
	ScavTrap	jeje("Jehanne");
	ScavTrap	jojo("Joscleyn");


	}
	return(1);
}
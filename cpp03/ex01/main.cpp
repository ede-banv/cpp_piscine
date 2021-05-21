#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	{
	std::cout <<"\n\e[1;36m -- FragTrap Test --\e[0m\n" << std::endl;
	FragTrap	marc("Marc");
	FragTrap	emma(marc);
	emma._name = "Emma";

	marc.rangedAttack(emma._name);
	emma.takeDamage(marc._ranged_dmg);
	emma.rangedAttack(marc._name);
	marc.takeDamage(emma._ranged_dmg);
	emma.meleeAttack(marc._name);
	marc.takeDamage(emma._melee_dmg);
	emma.beRepaired(50);
	emma.vaulthunter_dot_exe(marc._name);
	emma.vaulthunter_dot_exe(marc._name);
	emma.vaulthunter_dot_exe(marc._name);
	emma.vaulthunter_dot_exe(marc._name);
	emma.vaulthunter_dot_exe(marc._name);
	}
	{
	std::cout <<"\n\e[1;36m -- ScavTrap Test --\e[0m\n" << std::endl;
	ScavTrap	jeje("Jehanne");
	ScavTrap	jojo(jeje);
	jojo._name = "Joscelyn";

	jeje.rangedAttack(jojo._name);
	jojo.takeDamage(jeje._ranged_dmg);
	jojo.rangedAttack(jeje._name);
	jeje.takeDamage(jojo._ranged_dmg);
	jojo.meleeAttack(jeje._name);
	jeje.takeDamage(jojo._melee_dmg);
	jojo.beRepaired(50);
	jojo.challengeNewcomer(jeje._name);
	jojo.challengeNewcomer(jeje._name);
	jojo.challengeNewcomer(jeje._name);
	}
	return(0);
}
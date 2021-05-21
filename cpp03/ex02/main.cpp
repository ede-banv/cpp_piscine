#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	{
	std::cout <<"\n\e[1;36m -- FragTrap Test --\e[0m\n" << std::endl;
	FragTrap	marc("Marc");
	FragTrap	emma(marc);
	emma.name = "Emma";

	marc.rangedAttack(emma.name);
	emma.takeDamage(marc.ranged_dmg);
	emma.rangedAttack(marc.name);
	marc.takeDamage(emma.ranged_dmg);
	emma.meleeAttack(marc.name);
	marc.takeDamage(emma.melee_dmg);
	emma.beRepaired(50);
	emma.vaulthunter_dot_exe(marc.name);
	emma.vaulthunter_dot_exe(marc.name);
	emma.vaulthunter_dot_exe(marc.name);
	emma.vaulthunter_dot_exe(marc.name);
	emma.vaulthunter_dot_exe(marc.name);
	}
	{
	std::cout <<"\n\e[1;36m -- ScavTrap Test --\e[0m\n" << std::endl;
	ScavTrap	jeje("Jehanne");
	ScavTrap	jojo(jeje);
	jojo.name = "Joscelyn";

	jeje.rangedAttack(jojo.name);
	jojo.takeDamage(jeje.ranged_dmg);
	jojo.rangedAttack(jeje.name);
	jeje.takeDamage(jojo.ranged_dmg);
	jojo.meleeAttack(jeje.name);
	jeje.takeDamage(jojo.melee_dmg);
	jojo.beRepaired(50);
	jojo.challengeNewcomer(jeje.name);
	jojo.challengeNewcomer(jeje.name);
	jojo.challengeNewcomer(jeje.name);
	}
	return(0);
}
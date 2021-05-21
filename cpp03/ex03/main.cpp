#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main()
{
	{
	std::cout <<"\n\e[1;36m -- FragTrap Test --\e[0m\n" << std::endl;
	FragTrap	marc("Marc");
	FragTrap	emma(marc);
	emma.name = "Emma";

	marc.rangedAttack("Emma");
	emma.takeDamage(marc.ranged_dmg);
	emma.rangedAttack("Marc");
	marc.takeDamage(emma.ranged_dmg);
	emma.meleeAttack("Marc");
	marc.takeDamage(emma.melee_dmg);
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
	ScavTrap	jojo(jeje);
	jojo.name = "Joscelyn";

	jeje.rangedAttack("Joscelyn");
	jojo.takeDamage(jeje.ranged_dmg);
	jojo.rangedAttack("Jehanne");
	jeje.takeDamage(jojo.ranged_dmg);
	jojo.meleeAttack("Jehanne");
	jeje.takeDamage(jojo.melee_dmg);
	jojo.beRepaired(50);
	jojo.challengeNewcomer("Jehanne");
	jojo.challengeNewcomer("Jehanne");
	jojo.challengeNewcomer("Jehanne");
	}
	{
	std::cout <<"\n\e[1;36m -- NinjaTrap Test --\e[0m\n" << std::endl;
	NinjaTrap	jerem("Jeremy");
	NinjaTrap	jx(jerem);
	jx.name = "Jean-Xavier";

	jerem.rangedAttack("Joscelyn");
	jx.takeDamage(jerem.ranged_dmg);
	jx.rangedAttack("Jehanne");
	jerem.takeDamage(jx.ranged_dmg);
	jx.meleeAttack("Jehanne");
	jerem.takeDamage(jx.melee_dmg);
	jx.beRepaired(50);

	ScavTrap	lienard("Alexandre");
	FragTrap	leloup("Celia");

	jx.ninjaShoebox(jerem);
	jx.ninjaShoebox(lienard);
	jx.ninjaShoebox(leloup);
	}
	return(0);
}
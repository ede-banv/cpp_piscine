#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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

	jerem.rangedAttack("Jean-Xavier");
	jx.takeDamage(jerem.ranged_dmg);
	jx.rangedAttack("Jeremy");
	jerem.takeDamage(jx.ranged_dmg);
	jx.meleeAttack("Jeremy");
	jerem.takeDamage(jx.melee_dmg);
	jx.beRepaired(50);

	ScavTrap	lienard("Alexandre");
	FragTrap	leloup("Celia");

	jx.ninjaShoebox(jerem);
	jx.ninjaShoebox(lienard);
	jx.ninjaShoebox(leloup);
	}
	{
	std::cout <<"\n\e[1;36m -- SuperTrap Test --\e[0m\n" << std::endl;
	SuperTrap	picard("Marie-Lise");
	SuperTrap	papin(picard);
	NinjaTrap	garcia("Martin");
	papin.name = "Matteo";

	picard.rangedAttack("Matteo");
	papin.takeDamage(picard.ranged_dmg);
	papin.rangedAttack("Marie-Lise");
	picard.takeDamage(papin.ranged_dmg);
	papin.meleeAttack("Marie-Lise");
	picard.takeDamage(papin.melee_dmg);
	papin.beRepaired(50);
	papin.vaulthunter_dot_exe(picard.name);
	papin.ninjaShoebox(garcia);
	}
	return(0);
}
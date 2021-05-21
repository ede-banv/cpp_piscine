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
	{
	std::cout <<"\n\e[1;36m -- NinjaTrap Test --\e[0m\n" << std::endl;
	NinjaTrap	jerem("Jeremy");
	NinjaTrap	jx(jerem);
	jx.name = "Jean-Xavier";

	jerem.rangedAttack(jx.name);
	jx.takeDamage(jerem.ranged_dmg);
	jx.rangedAttack(jerem.name);
	jerem.takeDamage(jx.ranged_dmg);
	jx.meleeAttack(jerem.name);
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

	picard.rangedAttack(papin.name);
	papin.takeDamage(picard.ranged_dmg);
	papin.rangedAttack(picard.name);
	picard.takeDamage(papin.ranged_dmg);
	papin.meleeAttack(picard.name);
	picard.takeDamage(papin.melee_dmg);
	papin.beRepaired(50);
	papin.vaulthunter_dot_exe(picard.name);
	papin.ninjaShoebox(garcia);
	}
	return(0);
}
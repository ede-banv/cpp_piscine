#include <iostream>
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* jojo = new TacticalMarine;
	ISpaceMarine* emma = new AssaultTerminator;

	std::cout << std::endl;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
	vlc->push(jojo);
	vlc->push(emma);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
		cur->rangedAttack();
        cur->meleeAttack();
		std::cout << std::endl;
    }

	Squad*	copy = new Squad;
    copy->push(bob->clone());
    copy->push(jim->clone());
	copy->push(jojo->clone());
	copy->push(emma->clone());

	ISpaceMarine* marc = new TacticalMarine;
	std::cout << std::endl;
	Squad*	brrr = new Squad;
	brrr->push(marc);
	brrr->getUnit(0)->battleCry();
	std::cout << std::endl;

	*brrr = *copy;
	for (int i = 0; i < brrr->getCount(); ++i)
    {
        ISpaceMarine* cur = brrr->getUnit(i);
        cur->battleCry();
		cur->rangedAttack();
        cur->meleeAttack();
		std::cout << std::endl;
    }

	delete brrr;
	delete copy;
    delete vlc;
    return 0;
}